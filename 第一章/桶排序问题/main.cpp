#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*******************************************
*	Ͱ����ʱ�临�Ӷ����� 
*	�������ݵ�15��ѭ��һ��ѭ�� m �Σ�mΪͰ�ĸ��� 
*	��18�д���ѭ�� n �Σ�nΪ���������ĸ��� 
*	��22��23��һ��ѭ�� m+n �� 
*	ʱ�临�Ӷ�ΪO(m+n+m+n),���� O(M+N) 
********************************************/ 

int main(int argc, char** argv) {
	int book[1001],i,j,t,n;
	for(i=0;i<=1000;i++)
		book[i]=0;
	scanf("%d",&n); //����һ��������ʾ��������n��
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);//��ÿһ������������t��
		book[t]++;	//���м������Ա��Ϊt��Ͱ��һ��С���� 
	}
	for(i=1000;i>=0;i--)//�����жϱ��1000~0��Ͱ���Ӵ�С��� 	
		for(j=1;j<=book[i];j++) //���ּ��ξͽ�Ͱ�ı�Ŵ�ӡ���� 
			printf("%d ",i);


	//system("pause");
	return 0;
}
