/*输入一个正整数n(1<n<10)，再输入n个整数，将它们存入数组a中
1找出最大值，输出最大值及其下标 2把最大值放最后（与最后一个交换）*/
#include<stdio.h> 
int main()
{
	int n,i,max,t,maxindex;
	int a[10];
	printf("enter n:");
	scanf("%d",&n);//输入一个正整数n(1<n<10)
	printf("enter %d numbers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//再输入n个整数，将它们存入数组a中
	}
	max=a[0];
	maxindex=0;
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];//找出最大值
			maxindex=i;
		}
	}
	printf("%d %d\n",max,maxindex);//输出最大值及其下标
	t=a[maxindex];
	a[maxindex]=a[n-1];
	a[n-1]=t;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);//最大值放最后
	}
	return 0;
}
