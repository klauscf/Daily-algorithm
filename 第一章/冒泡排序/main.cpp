#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*******************************************
*	ð��ʱ�临�Ӷ����� 
*	ʱ�临�Ӷ�O(N^2) 
*	ԭ��ÿһ��ֻ��ȷ����һ������λ 	 
********************************************/ 

struct student{
	char name[21];
	char score;
};//���ﴴ��һ���ṹ�������������ͷ��� 

int main(int argc, char** argv) {
	struct student a[100],t;
	int i,j,n;
	scanf("%d",&n);//����һ����n
	for(i=1;i<=n;i++)//ѭ������n�������ͷ��� 
		scanf("%s %d",a[i].name,&a[i].score);
	
	//�����Ӹߵ���
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-i;j++)
			if(a[j].score<a[j+1].score)//�Է������бȽ�
			{
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			} 
	} 
	 
	for(i=1;i<=n;i++)
		printf("%s\n",a[i].name);
	return 0;
}
