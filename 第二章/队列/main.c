#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct queue
{
	int data[100];//�������壬�����洢���ݡ� 
	int head;//���� 
	int tail;//��β 
};

int main(int argc, char *argv[]) {
	struct queue q;
	int i;
	//��ʼ������
	q.head=1;
	q.tail=1;
	for(i=1;i<=9;i++)
	{
		//��������в���9����
		scanf("%d",&q.data[q.tail]);
		q.tail++;
	} 
	
	while(q.head<q.tail)//���в�Ϊ��ʱִ��ѭ��
	{
		//��ӡ���ײ������׳���
		printf("%d ",q.data[q.head]);
		q.head++;
		
		//�Ƚ��¶��׵�����ӵ���β
		q.data[q.tail]=q.data[q.head];
		q.tail++;
		//�ٽ����׳���
		q.head++; 
	} 
	return 0;
}
