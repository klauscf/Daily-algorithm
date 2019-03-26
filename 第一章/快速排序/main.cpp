#include <iostream>
#include <stdio.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*******************************************
*	��������ʱ�临�Ӷ����� 
*	ʱ�临�Ӷȣ�����ʱ�临�Ӷ�O(N^2)��
*				ƽ�����Ӷ�ΪO(NlogN) 
*	ԭ������ÿ�ν���Ϊ��Ծʽ�����彻���������٣�
*		����һ�ֶ��ֵ�˼�� 	 
********************************************/ 

int a[101],n;//����ȫ�ֱ�����������������Ҫ���Ӻ�����ʹ�� 

void quicksort(int left, int right)
{
	int i,j,t,temp;
	if(left>right)
		return ;
		
	temp=a[left];//temp�д�ľ��ǻ���
	i=left;
	j=right;
	while(i!=j)
	{
		//˳�����Ҫ��Ҫ�ȴ��������� 
		while(a[j]>temp && i<j)
			j--;//ֱ���ҵ�һ����tempС
		//�ٴ���������
		while(a[i]<=temp && i<j) 
			i++;//ֱ���ҵ�һ����temp��
			
		//�����������������е�λ��
		if(i<j)//��֤����û������
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		} 		
	}
	//����׼����λ
	a[left]=a[i];
	a[i]=temp;
	
	quicksort(left,i-1);//����������ߵģ��ݹ���� 
	quicksort(i+1,right);//���������ұߵģ��ݹ���� 
} 

int main(int argc, char** argv) {
	int i,j,t;
	//��������
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	quicksort(1,n);//���ÿ���
	
	//�����ӡ
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);	
				 
	return 0;
}
