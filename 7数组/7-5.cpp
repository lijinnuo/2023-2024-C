/*���ֲ��ҷ� 1��С�������� 2��x����±��not found*/
#include<stdio.h>
int main()
{
	int n,i,temp,index,k,x;
	int a[10];
	printf("enter n:");//��ʾ����n 
	scanf("%d",&n);
	printf("enter %d integers:",n);//��ʾ����n���� 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//�������n�������θ��������е�n��Ԫ��a[0]~a[n-1] 
	}
	for(k=0;k<n-1;k++)//���ѭ������ѭ������ 
	{
		index=k; //index�����Сֵ���ڵ��±� 
		for(i=k+1;i<n;i++)//�ڲ�ѭ������ÿ�εıȽϴ���                                    /*1ѡ������*/ 
		{
			if(a[i]<a[index])
			{
				index=i;
			}
		}
		temp=a[index];
		a[index]=a[k];
		a[k]=temp;//��СԪ�����±�Ϊk��Ԫ�ؽ��� 
	}
	printf("after sorted:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);//������������� 
	}
	printf("\n");
	printf("enter x:");//��ʾ����x 
	scanf("%d",&x);
	int low=0,high=n-1,mid;//��ʼʱ��������Ϊ�������� 
	while(low<=high)
	{
		mid=(low+high)/2;//�м�λ��midȡ�� 
		if(x==a[mid])
		{
			break;//���ҳɹ�����ֹѭ�� 
		}
		else if(x>a[mid])                                                                 /*2���ֲ��ҷ�*/ 
		{
			low=mid+1;//���Σ�low���� 
		}
		else if(x<a[mid])
		{
			high=mid-1;//ǰ��Σ�highǰ�� 
		}
	}
	if(low<=high)//�ҵ�������±� 
	{
		printf("index is %d\n",mid);
	}
	else 
	{
		printf("not found\n");//x��������a�� 
	}
	return 0;
} 
