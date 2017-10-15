#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* timeConversion(char* s)
{
  static char s2[8];
  char word[2];

  char ch = s[8];

  int i = 0;

  if((ch=='P'&&(!(s[0]=='1'&&s[1]=='2')))||(s[0]=='1'&&s[1]=='2'&&s[8]=='A'))
  {
    word[0]=s[0];
    word[1]=s[1];
    word[2]='\0';

    i = atoi(word);

    i=(i+12)%24;

    int temp = i%10;
    s2[1] = temp + '0';

    i=i/10;
    temp=i%10;

    s2[0] = temp + '0';

    for(i=2;i<8;i++)
    {
      s2[i]=s[i];
    }
    s2[i]='\0';
  }
  else
  {
    for(i=0;i<8;i++)
    {
      s2[i]=s[i];

    }
    s2[i]='\0';
  }

  return(s2);
}



int main()
{
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    char *result;
    result = timeConversion(s);
    //printf("%s\n",s2);
    printf("%s\n", result);
    return 0;
}
