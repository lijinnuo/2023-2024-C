/*选择法排序 从小到大 
在未排序的n个数(a[0]~a[n-1])中找到最小数，将它与a[0]交换
在剩下未排序的n-1个数(a[1]~a[n-1])中找到最小数，将它与a[1]交换
以此类推*/
#include<stdio.h>
int main()
{
	int n,i,temp,index,k;
	int a[10];
	printf("enter n:");//提示输入n 
	scanf("%d",&n);
	printf("enter %d integers:",n);//提示输入n个数 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//将输入的n个数依次赋给数组中的n个元素a[0]~a[n-1] 
	}
	for(k=0;k<n-1;k++)//外层循环控制循环次数 
	{
		index=k; //index存放最小值所在的下标 
		for(i=k+1;i<n;i++)//内层循环控制每次的比较次数 
		{
			if(a[i]<a[index])
			{
				index=i;
			}
		}
		temp=a[index];
		a[index]=a[k];
		a[k]=temp;//最小元素与下标为k的元素交换 
	}
	printf("after sorted:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);//输出排序后的数组 
	}
	return 0;
}
