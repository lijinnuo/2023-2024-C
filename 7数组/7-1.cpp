/*����һ��������n(1<n<10)��������n�������������Ǵ�������a��
1�ҳ����ֵ��������ֵ�����±� 2�����ֵ����������һ��������*/
#include<stdio.h> 
int main()
{
	int n,i,max,t,maxindex;
	int a[10];
	printf("enter n:");
	scanf("%d",&n);//����һ��������n(1<n<10)
	printf("enter %d numbers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//������n�������������Ǵ�������a��
	}
	max=a[0];
	maxindex=0;
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];//�ҳ����ֵ
			maxindex=i;
		}
	}
	printf("%d %d\n",max,maxindex);//������ֵ�����±�
	t=a[maxindex];
	a[maxindex]=a[n-1];
	a[n-1]=t;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);//���ֵ�����
	}
	return 0;
}
