/*����ͳ�ƣ�����ѡƱ��ͳ�Ƶ�Ʊ�����
8����Ŀ��nλ����*/
#include<stdio.h>
#define MAXN 8//������ų���MAXN 
int main()
{
	int i,n,response;
	int count[MAXN+1];//�����±��Ӧ��Ŀ��ţ���ʹ��count[0] 
	printf("enter n:");//��ʾ���������n 
	scanf("%d",&n);
	for(i=1;i<=MAXN;i++)
	{
		count[i]=0;//�������������� 
	}
	for(i=1;i<=n;i++)//���벢ͳ��ͶƱ���� 
	{
		printf("enter your response:");//��ʾ����ͶƱ 
		scanf("%d",&response);
		if(response>=1&&response<=MAXN)//��������Ƿ���Ч 
		{
			count[response]++;//��Ч��Ʊ��Ӧ��Ŀ��Ʊ��һ 
		}
		else
		{
			printf("invalid:%d\n",response);//��ЧƱ�������ʾ 
		}
	}
	printf("result:\n");
	for(i=1;i<=MAXN;i++)//�����Ʊ��Ϊ�����Ŀ��Ʊ��� 
	{
		if(count[i]!=0)
		{
			printf("%4d%4d\n",i,count[i]);
		}
	}
	return 0;
 } 
