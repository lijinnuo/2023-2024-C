/*ѡ������ ��С���� 
��δ�����n����(a[0]~a[n-1])���ҵ���С����������a[0]����
��ʣ��δ�����n-1����(a[1]~a[n-1])���ҵ���С����������a[1]����
�Դ�����*/
#include<stdio.h>
int main()
{
	int n,i,temp,index,k;
	int a[10];
	printf("enter n:");//��ʾ����n 
	scanf("%d",&n);
	printf("enter %d integers:",n);//��ʾ����n���� 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//�������n�������θ��������е�n��Ԫ��a[0]~a[n-1] 
	}
	for(k=0;k<n-1;k++)//���ѭ������ѭ������ 
	{
		index=k; //index�����Сֵ���ڵ��±� 
		for(i=k+1;i<n;i++)//�ڲ�ѭ������ÿ�εıȽϴ��� 
		{
			if(a[i]<a[index])
			{
				index=i;
			}
		}
		temp=a[index];
		a[index]=a[k];
		a[k]=temp;//��СԪ�����±�Ϊk��Ԫ�ؽ��� 
	}
	printf("after sorted:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);//������������� 
	}
	return 0;
}
