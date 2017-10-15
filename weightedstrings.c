#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{

    //int s1 = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    //a=97 , A=65
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    int count = 0;

    int length = strlen(s);
    int* a1 = (int *)malloc(sizeof(int)*length);

    char ch;
    int i;
    int rec = 0;

    for(i=0;i<length;i++)
    {
      ch = s[i];
      int chno2 = ch;
      int chno = chno2 - 96;
      if(i != 0)
      {
        if(s[i-1]==s[i])
        {
          count = count+1;
          a1[i] = chno*count;

        }
        else
        {
          count = 1;
          a1[i] = chno;

        }
      }
      else
      {
        a1[i]=chno;
        count=1;

      }


    }

    int a0;


    int n;
    scanf("%d",&n);
    //int *a2 = (int*)malloc(sizeof(int)*n);
    int count2 = 0;
    for(a0 = 0; a0 < n; a0++)
    {
        int x;
        scanf("%d",&x);

        // your code goes here
        for(i=0;i<length;i++)
        {
          if(x == a1[i])
          {
            count2=1;
          }
        }
        if(count2 == 1)
        {
          printf("Yes\n");
          //a2[a0]=1;
        }
        else
        {
          printf("No\n");
          //a2[a0]=0;
        }
        count2=0;
    }

    /*
    for(a0 = 0; a0 < n; a0++)
    {
      if(a2[a0]==1)
      {
        printf("Yes\n");
      }
      else
      {
        printf("No\n");
      }
    }
    */

    return 0;
}
