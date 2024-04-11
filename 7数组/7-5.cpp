/*二分查找法 1从小到大排序 2找x输出下标或not found*/
#include<stdio.h>
int main()
{
	int n,i,temp,index,k,x;
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
		for(i=k+1;i<n;i++)//内层循环控制每次的比较次数                                    /*1选择法排序*/ 
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
	printf("\n");
	printf("enter x:");//提示输入x 
	scanf("%d",&x);
	int low=0,high=n-1,mid;//开始时查找区间为整个数组 
	while(low<=high)
	{
		mid=(low+high)/2;//中间位置mid取整 
		if(x==a[mid])
		{
			break;//查找成功，终止循环 
		}
		else if(x>a[mid])                                                                 /*2二分查找法*/ 
		{
			low=mid+1;//后半段，low后移 
		}
		else if(x<a[mid])
		{
			high=mid-1;//前半段，high前移 
		}
	}
	if(low<=high)//找到，输出下标 
	{
		printf("index is %d\n",mid);
	}
	else 
	{
		printf("not found\n");//x不在数组a中 
	}
	return 0;
} 
