/*´òÓ¡Ñî»ÔÈı½Ç*/
#include<stdio.h>
int main()
{
	int i,j;
	int a[6][6];
	for(i=0;i<6;i++)
	{ 
		a[i][0]=1;
		for(j=0;j<i+1;j++)
		{
			if(i==j)
			{
				a[i][j]=1;
			}
			else if(i>1&&j>0)
			{
				a[i][j]=a[i-1][j]+a[i-1][j-1];
			}
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
