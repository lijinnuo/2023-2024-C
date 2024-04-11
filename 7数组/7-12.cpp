/*判断下三角矩阵*/
#include <stdio.h>
#define N 81
int main()
{
  int n;
  int a[N][N];
  int i,j;
  int t=1;
  printf("Input n:"); //提示输入行数和列数 
  scanf("%d",&n);
  printf("Input array:\n"); 
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<i;j++) 
    {
      if(a[i][j]!=0)
      {
        t=0;//如果不是0，可以直接确定主对角线以下不是0，直接退出循环
        break;
      }
    }
  }
  if(t==0)
  {
    printf("NO");
  }
  else if(t==1)
  {
    printf("YES");
  }
  return 0;
}
