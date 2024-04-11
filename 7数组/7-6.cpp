/*找出矩阵中最大最小值的行下标和列下标*/
#include<stdio.h>
int main()
{
	int a[10][10];
	int m,n,i,j,row,col;
	printf("enter n m :");//提示输入m和n 
	scanf("%d %d",&m,&n);
	printf("enter %d integers:",m*n);//提示输入m*n个数 
	for(i=0;i<m;i++)//行下标是外循环的循环变量 
	{
		for(j=0;j<n;j++)//列下标是内循环的循环变量 
		{
			scanf("%d",&a[i][j]);//输入数组元素 
		}
	}
	row=col=0;//先假设a[0][0]是最大值 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[row][col]<a[i][j])//如果a[i][j]比假设值大 
			{
				row=i;
				col=j;//再假设a[i][j]是最大值 
			}
		}
	}
	printf("max=a[%d][%d]=%d\n",row,col,a[row][col]);
	row=col=0;//先假设a[0][0]是最小值 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[row][col]>a[i][j])//如果a[i][j]比假设值小 
			{
				row=i;
				col=j;//再假设a[i][j]是最小值
			}
		}
	}
	printf("min=a[%d][%d]=%d\n",row,col,a[row][col]);
	return 0;
}
