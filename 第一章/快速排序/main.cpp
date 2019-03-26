#include <iostream>
#include <stdio.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*******************************************
*	快速排序时间复杂度问题 
*	时间复杂度：最差的时间复杂度O(N^2)，
*				平均复杂度为O(NlogN) 
*	原理：快排每次交换为跳跃式，总体交换次数减少，
*		基于一种二分的思想 	 
********************************************/ 

int a[101],n;//定义全局变量，这两个变量需要在子函数中使用 

void quicksort(int left, int right)
{
	int i,j,t,temp;
	if(left>right)
		return ;
		
	temp=a[left];//temp中存的就是基数
	i=left;
	j=right;
	while(i!=j)
	{
		//顺序很重要，要先从右往左找 
		while(a[j]>temp && i<j)
			j--;//直到找到一个比temp小
		//再从左往右找
		while(a[i]<=temp && i<j) 
			i++;//直到找到一个比temp大
			
		//交换两个数在数组中的位置
		if(i<j)//保证两个没有相遇
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		} 		
	}
	//将基准数归位
	a[left]=a[i];
	a[i]=temp;
	
	quicksort(left,i-1);//继续处理左边的，递归过程 
	quicksort(i+1,right);//继续处理右边的，递归过程 
} 

int main(int argc, char** argv) {
	int i,j,t;
	//读入数据
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	quicksort(1,n);//调用快排
	
	//输出打印
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);	
				 
	return 0;
}
