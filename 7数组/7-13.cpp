/*ð�ݷ����� ��С����*/
#include<stdio.h>
int main()
{
	int n,a[10],i,t,j;
	printf("enter n(n<=10):");//��ʾ����n 
	scanf("%d",&n);
	printf("enter %d integers:",n);//��ʾ����n���� 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)//���ѭ���������� 
	{
		for(j=0;j<n-i;j++)//�ڲ�ѭ�����ƱȽϴ��� 
		{
			if(a[j]>a[j+1])//�������ǰһ�������ں�һ���� 
			{
				t=a[j];
				a[j]=a[j+1];//���� 
				a[j+1]=t;
			}
		}
	}
	printf("after sorted:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
 } 
