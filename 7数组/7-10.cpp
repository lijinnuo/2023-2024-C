/*ʮ�������ַ�ת����ʮ���ƷǸ�����*/
#include<stdio.h>
#define MAXLINE 80//������ų���MAXLIUNE 
int main()
{
	int i,k,number;
	char hexad[MAXLINE],str[MAXLINE];
	printf("enter a string:");//��ʾ�����ַ��� 
	i=0;
	while((str[i]=getchar())!='#')//���������Ϊ# 
	{
		i++;
	}
	str[i]='\0';//���ַ���������\0�������� 
	i=0;
	k=0;//kΪ���ַ���hexad���±� 
	while(str[i]!='\0')
	{
		if((str[i]>='0'&&str[i]<='9')||(str[i]>='a'&&str[i]<='f')||(str[i]>='A'&&str[i]<='F'))//�ж��ַ����е������Ƿ�Ϊʮ�������ַ� 
		{
			hexad[k]=str[i];//��ʮ�������ַ��������ַ��� 
			k++;//ÿ����һ���ַ������е����ݶ�һ�����±��һ 
		}
		i++;
	}
	hexad[k]='\0';//���ַ���������� 
	printf("new string:");//���ʮ���������ַ��� 
	for(i=0;hexad[i]!='\0';i++)
	{
		putchar(hexad[i]);
	}
	printf("\n");
	number=0;//���ʮ���������������� 
	for(i=0;hexad[i]!='\0';i++)//ת��Ϊʮ�������������ת�� 
	{
		if(hexad[i]>='0'&&hexad[i]<='9')
		{
			number=number*16+hexad[i]-'0';
		}
		else if(hexad[i]>='A'&&hexad[i]<='F')
		{
			number=number*16+hexad[i]-'A'+10;
		}
		else if(hexad[i]>='a'&&hexad[i]<='f')
		{
			number=number*16+hexad[i]-'a'+10;
		}
	}
	printf("number=%d\n",number);//���ʮ����ֵ 
	return 0;
 } 
