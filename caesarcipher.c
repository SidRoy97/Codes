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
    scanf("%d\n",&n);
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%[^\n]s",s);
    printf("%s\n",s);
    int k;
    scanf("%d",&k);

    int i;
    char* s2 = (char *)malloc(10240 * sizeof(char));

    for(i=0;i<n;i++)
    {
      char ch = s[i];

      int no = ch;

      if((no>=65 && no<=90) || (no>=97 && no<=122))
      {
        if(no-65<=25 && no+k>90)
        {
          no=64+((no+k)-90);
        }
        else if(no-97<=25 && no+k>122)
        {
          no=96+((no+k)-122);
        }
        else
        {
          no = no + k;
        }
        s2[i]=(char)no;
      }
      else
      {
        s2[i]=no;
      }
    }

    s2[i] = '\0';

    printf("%s\n",s2);

    return 0;
}
