#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*******************************************
*	冒泡时间复杂度问题 
*	时间复杂度O(N^2) 
*	原理：每一次只能确定将一个数归位 	 
********************************************/ 

struct student{
	char name[21];
	char score;
};//这里创建一个结构体来储存姓名和分数 

int main(int argc, char** argv) {
	struct student a[100],t;
	int i,j,n;
	scanf("%d",&n);//输入一个数n
	for(i=1;i<=n;i++)//循环输入n个人名和分数 
		scanf("%s %d",a[i].name,&a[i].score);
	
	//分数从高到低
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-i;j++)
			if(a[j].score<a[j+1].score)//对分数进行比较
			{
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			} 
	} 
	 
	for(i=1;i<=n;i++)
		printf("%s\n",a[i].name);
	return 0;
}
