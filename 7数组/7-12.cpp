/*�ж������Ǿ���*/
#include <stdio.h>
#define N 81
int main()
{
  int n;
  int a[N][N];
  int i,j;
  int t=1;
  printf("Input n:"); //��ʾ�������������� 
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
        t=0;//�������0������ֱ��ȷ�����Խ������²���0��ֱ���˳�ѭ��
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
