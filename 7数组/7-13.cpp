/*冒泡法排序 从小到大*/
#include<stdio.h>
int main()
{
	int n,a[10],i,t,j;
	printf("enter n(n<=10):");//提示输入n 
	scanf("%d",&n);
	printf("enter %d integers:",n);//提示输入n个数 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)//外层循环控制趟数 
	{
		for(j=0;j<n-i;j++)//内层循环控制比较次数 
		{
			if(a[j]>a[j+1])//如果相邻前一个数大于后一个数 
			{
				t=a[j];
				a[j]=a[j+1];//交换 
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
