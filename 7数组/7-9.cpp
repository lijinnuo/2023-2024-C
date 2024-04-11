/*凯撒密码：将明文中的所有字母都在字母表上向后偏移offset位后被替换成密文*/
#include<stdio.h>
#define MAXLINE 80//定义符号常量MAXLINE 
#define M 26//定义符号常量M，表示字母表中大写或者小写字母的数量26 
int main()
{
	int i=0,offset;
	char str[MAXLINE];
	printf("enter a string:");//提示输入字符串 
	while((str[i]=getchar())!='\n')//把输入的字符串放到数组中，回车表示输入结束 
	{
		i++;
	}
	str[i]='\0';//数组中有字符串结束符 
	printf("enter offset：");//提示输入offset 
	scanf("%d",&offset);
	if(offset>=M)//如果offset大于等于26 
	{
		offset=offset%M;//移位效果相当于取其余数 
	}
	for(i=0;str[i]!='\0';i++)//循环条件：str[i]不等于'\0' 
	{
		if(str[i]>='A'&&str[i]<='Z')//条件为输入的字符是二十六位大写字母 
		{
			if((str[i]-'A'+offset)<M)//大写字母向后偏移offset位后仍在26个字母范围内 
			{
				str[i]=str[i]+offset;
			}
			else//如果向后越界 
			{
				str[i]=str[i]-(M-offset);//循环移位 
			}
		}
		else if(str[i]>='a'&&str[i]<='z')//条件为输入的字符是二十六位小写字母
		{
			if((str[i]-'a'+offset)<M)//大写字母向后偏移offset位后仍在26个字母范围内
			{
				str[i]=str[i]+offset;
			}
			else//如果向后越界 
			{
				str[i]=str[i]-(M-offset);//循环移位 
			}
		}
	}
	printf("After being encrypted:");
	for(i=0;str[i]!='\0';i++)//循环条件：str[i]不等于'\0'
	{
		putchar(str[i]);
	}
	printf("\n");
	return 0;
 } 
