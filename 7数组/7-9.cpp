/*�������룺�������е�������ĸ������ĸ�������ƫ��offsetλ���滻������*/
#include<stdio.h>
#define MAXLINE 80//������ų���MAXLINE 
#define M 26//������ų���M����ʾ��ĸ���д�д����Сд��ĸ������26 
int main()
{
	int i=0,offset;
	char str[MAXLINE];
	printf("enter a string:");//��ʾ�����ַ��� 
	while((str[i]=getchar())!='\n')//��������ַ����ŵ������У��س���ʾ������� 
	{
		i++;
	}
	str[i]='\0';//���������ַ��������� 
	printf("enter offset��");//��ʾ����offset 
	scanf("%d",&offset);
	if(offset>=M)//���offset���ڵ���26 
	{
		offset=offset%M;//��λЧ���൱��ȡ������ 
	}
	for(i=0;str[i]!='\0';i++)//ѭ��������str[i]������'\0' 
	{
		if(str[i]>='A'&&str[i]<='Z')//����Ϊ������ַ��Ƕ�ʮ��λ��д��ĸ 
		{
			if((str[i]-'A'+offset)<M)//��д��ĸ���ƫ��offsetλ������26����ĸ��Χ�� 
			{
				str[i]=str[i]+offset;
			}
			else//������Խ�� 
			{
				str[i]=str[i]-(M-offset);//ѭ����λ 
			}
		}
		else if(str[i]>='a'&&str[i]<='z')//����Ϊ������ַ��Ƕ�ʮ��λСд��ĸ
		{
			if((str[i]-'a'+offset)<M)//��д��ĸ���ƫ��offsetλ������26����ĸ��Χ��
			{
				str[i]=str[i]+offset;
			}
			else//������Խ�� 
			{
				str[i]=str[i]-(M-offset);//ѭ����λ 
			}
		}
	}
	printf("After being encrypted:");
	for(i=0;str[i]!='\0';i++)//ѭ��������str[i]������'\0'
	{
		putchar(str[i]);
	}
	printf("\n");
	return 0;
 } 
