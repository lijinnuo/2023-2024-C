/*十六进制字符转换成十进制非负整数*/
#include<stdio.h>
#define MAXLINE 80//定义符号常量MAXLIUNE 
int main()
{
	int i,k,number;
	char hexad[MAXLINE],str[MAXLINE];
	printf("enter a string:");//提示输入字符串 
	i=0;
	while((str[i]=getchar())!='#')//输入结束符为# 
	{
		i++;
	}
	str[i]='\0';//将字符串结束符\0存入数组 
	i=0;
	k=0;//k为新字符串hexad的下标 
	while(str[i]!='\0')
	{
		if((str[i]>='0'&&str[i]<='9')||(str[i]>='a'&&str[i]<='f')||(str[i]>='A'&&str[i]<='F'))//判断字符串中的内容是否为十六进制字符 
		{
			hexad[k]=str[i];//将十六进制字符放入新字符串 
			k++;//每存入一个字符数组中的内容多一个，下标加一 
		}
		i++;
	}
	hexad[k]='\0';//新字符串结束标记 
	printf("new string:");//输出十六进制新字符串 
	for(i=0;hexad[i]!='\0';i++)
	{
		putchar(hexad[i]);
	}
	printf("\n");
	number=0;//存放十进制整数，先清零 
	for(i=0;hexad[i]!='\0';i++)//转换为十进制整数，逐个转换 
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
	printf("number=%d\n",number);//输出十进制值 
	return 0;
 } 
