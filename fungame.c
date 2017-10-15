#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int *a,int size,int *b,int *test)
{
  int i;
  int j;
  int pos;
  int max=0;
  for(i=0;i<size;i++)
  {
    if(max<=a[i]&&test[i]!=1)
    {
      max=a[i];
      pos=i;
    }
  }

  a[pos] = -10000;
  b[pos] = -10000;
  test[pos]=1;

  return max;

}

int main()
{

    int testcase = 0;

    scanf("%d",&testcase);

    int i = 0;

    for(i=0;i<testcase;i++)
    {
      int size = 0;

      scanf("%d",&size);

      int *a = (int *)malloc(sizeof(int)*size);
      int *b = (int *)malloc(sizeof(int)*size);
      int *test = (int *)malloc(sizeof(int)*size);

      int j = 0;

      while(j<size && (scanf("%d",&a[j])==1))
      {
        j++;
      }

      j = 0;

      while(j<size && (scanf("%d",&b[j])==1))
      {
        j++;
      }

      int k = 0;
      int sum_a = 0;
      int sum_b = 0;
      int temp = 0;

      for(j=0;j<size;j++)
      {
        if(j%2 == 0)
        {
          temp = max(a,size,b,test);
          sum_a += temp;
          //printf("%d\n",temp);
        }
        else
        {
          temp = max(b,size,a,test);
          sum_b += temp;
          //printf("%d\n",temp);
        }
      }



      if(sum_a>sum_b)
      {
        printf("First\n");
      }
      else if(sum_a==sum_b)
      {
        printf("Tie\n");
      }
      else
      {
        printf("Second\n");
      }
    }

    return 0;
}
