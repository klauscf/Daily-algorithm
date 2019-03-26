#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*******************************************
*	排序去重思路 
*	思路一：先将编号去重，然后排序输出 
*	思路二：先从小到大，输出时去重复 	 
********************************************/

int main(int argc, char** argv) {
	int a[1001],n,i,t;
	for(i=1;i<=1000;i++)
		a[i]=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)//循环输入编号
	{
		scanf("%d",&t);//把每一个编号读到变量t中去
		a[t]=1;//标记出现的编号，同时去除重复 
	} 
	for(i=1;i<=1000;i++)//依次判断1~1000编号
	{
		if(a[i]==1)//出现就打印出来 
			printf("%d ",i); 
	}	
	return 0;
}
