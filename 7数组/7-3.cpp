/*分类统计：输入选票，统计得票后输出
8个栏目，n位观众*/
#include<stdio.h>
#define MAXN 8//定义符号常量MAXN 
int main()
{
	int i,n,response;
	int count[MAXN+1];//数组下标对应栏目编号，不使用count[0] 
	printf("enter n:");//提示输入观众数n 
	scanf("%d",&n);
	for(i=1;i<=MAXN;i++)
	{
		count[i]=0;//各栏计数器清零 
	}
	for(i=1;i<=n;i++)//输入并统计投票数据 
	{
		printf("enter your response:");//提示输入投票 
		scanf("%d",&response);
		if(response>=1&&response<=MAXN)//检查输入是否有效 
		{
			count[response]++;//有效的票对应栏目得票加一 
		}
		else
		{
			printf("invalid:%d\n",response);//无效票输出并提示 
		}
	}
	printf("result:\n");
	for(i=1;i<=MAXN;i++)//输出的票不为零的栏目得票情况 
	{
		if(count[i]!=0)
		{
			printf("%4d%4d\n",i,count[i]);
		}
	}
	return 0;
 } 
