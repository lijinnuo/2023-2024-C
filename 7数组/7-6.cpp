/*�ҳ������������Сֵ�����±�����±�*/
#include<stdio.h>
int main()
{
	int a[10][10];
	int m,n,i,j,row,col;
	printf("enter n m :");//��ʾ����m��n 
	scanf("%d %d",&m,&n);
	printf("enter %d integers:",m*n);//��ʾ����m*n���� 
	for(i=0;i<m;i++)//���±�����ѭ����ѭ������ 
	{
		for(j=0;j<n;j++)//���±�����ѭ����ѭ������ 
		{
			scanf("%d",&a[i][j]);//��������Ԫ�� 
		}
	}
	row=col=0;//�ȼ���a[0][0]�����ֵ 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[row][col]<a[i][j])//���a[i][j]�ȼ���ֵ�� 
			{
				row=i;
				col=j;//�ټ���a[i][j]�����ֵ 
			}
		}
	}
	printf("max=a[%d][%d]=%d\n",row,col,a[row][col]);
	row=col=0;//�ȼ���a[0][0]����Сֵ 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[row][col]>a[i][j])//���a[i][j]�ȼ���ֵС 
			{
				row=i;
				col=j;//�ټ���a[i][j]����Сֵ
			}
		}
	}
	printf("min=a[%d][%d]=%d\n",row,col,a[row][col]);
	return 0;
}
