/*计算某个日期是该年的第几天*/
#include<stdio.h>
int day_of_year(int year,int month,int day)
{
	int k,leap;
	int tab[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};//分平年和闰年两种情况 ，数组初始化，将每月的天数赋给数组 
	leap=(year%4==0&&year%100!=0||year%400==0);//判断闰年，当year是闰年时，leap=1；当year是非闰年时，leap=0 
    {
	 for(k=1;k<month;k++)//计算天数 
	 day=day+tab[leap][k];
    }
	return day;
}
int main()
{
	int year,month,day;
	printf("enter year month day:");
	scanf("%d %d %d",&year,&month,&day);
	printf("%d",day_of_year(year,month,day));
	return 0; 
} 
