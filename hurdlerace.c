#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n;
    int k;
    scanf("%d %d",&n,&k);
    int *height = malloc(sizeof(int) * n);
    int max=0;
    int i;
    for(i = 0; i < n; i++)
    {
       scanf("%d",&height[i]);
       if(i==0)
       {
         max=height[i];
       }
       else
       {
         if(height[i]>max)
         {
           max=height[i];
         }
       }
    }

    int answer = max-k;

    if(answer<=0)
    {
      answer=0;
      printf("%d\n",answer);
    }
    else
    {
      printf("%d\n",answer);
    }
    // your code goes here


    return 0;
}
