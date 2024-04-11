/*求一维数组元素的平均值，找出比平均值大的，输出元素及其下标*/
#include<stdio.h>
int main()
{
	int i,sum=0,n;
	int a[10];
	float average;//平均值定义为浮点数 
	printf("enter n:");//提示输入n 
	scanf("%d",&n);
	printf("enter %d numbers:",n);//输入n个数 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];//输入的数组元素累加求和 
	}
	average=sum/n;//求平均值 
	printf("平均值为%.2f\n",average);//保留两位小数输出平均值 
	printf("大于平均值\n"); 
	for(i=0;i<n;i++)
	{
		if(average<a[i])
		{
			printf("元素%d 下标%d\n",a[i],i);//输出比平均值大的元素及其下标 
		}
	}
	return 0;
}
