#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*******************************************
*	����ȥ��˼· 
*	˼·һ���Ƚ����ȥ�أ�Ȼ��������� 
*	˼·�����ȴ�С�������ʱȥ�ظ� 	 
********************************************/

int main(int argc, char** argv) {
	int a[1001],n,i,t;
	for(i=1;i<=1000;i++)
		a[i]=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)//ѭ��������
	{
		scanf("%d",&t);//��ÿһ����Ŷ�������t��ȥ
		a[t]=1;//��ǳ��ֵı�ţ�ͬʱȥ���ظ� 
	} 
	for(i=1;i<=1000;i++)//�����ж�1~1000���
	{
		if(a[i]==1)//���־ʹ�ӡ���� 
			printf("%d ",i); 
	}	
	return 0;
}
