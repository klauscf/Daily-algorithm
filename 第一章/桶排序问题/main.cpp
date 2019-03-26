#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*******************************************
*	桶排序时间复杂度问题 
*	输入数据第15行循环一共循环 m 次，m为桶的个数 
*	第18行代码循环 n 次，n为待排序数的个数 
*	第22、23行一个循环 m+n 次 
*	时间复杂度为O(m+n+m+n),即记 O(M+N) 
********************************************/ 

int main(int argc, char** argv) {
	int book[1001],i,j,t,n;
	for(i=0;i<=1000;i++)
		book[i]=0;
	scanf("%d",&n); //输入一个数，表示接下来有n行
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);//把每一个数读到变量t中
		book[t]++;	//进行计数，对编号为t的桶放一个小旗子 
	}
	for(i=1000;i>=0;i--)//依次判断编号1000~0的桶，从大到小输出 	
		for(j=1;j<=book[i];j++) //出现几次就将桶的编号打印几次 
			printf("%d ",i);


	//system("pause");
	return 0;
}
