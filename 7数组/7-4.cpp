/*��һά����Ԫ�ص�ƽ��ֵ���ҳ���ƽ��ֵ��ģ����Ԫ�ؼ����±�*/
#include<stdio.h>
int main()
{
	int i,sum=0,n;
	int a[10];
	float average;//ƽ��ֵ����Ϊ������ 
	printf("enter n:");//��ʾ����n 
	scanf("%d",&n);
	printf("enter %d numbers:",n);//����n���� 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];//���������Ԫ���ۼ���� 
	}
	average=sum/n;//��ƽ��ֵ 
	printf("ƽ��ֵΪ%.2f\n",average);//������λС�����ƽ��ֵ 
	printf("����ƽ��ֵ\n"); 
	for(i=0;i<n;i++)
	{
		if(average<a[i])
		{
			printf("Ԫ��%d �±�%d\n",a[i],i);//�����ƽ��ֵ���Ԫ�ؼ����±� 
		}
	}
	return 0;
}
