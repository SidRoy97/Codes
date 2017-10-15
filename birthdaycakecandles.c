#include<stdio.h>
#include<stdlib.h>

int birthdayCakeCandles(int n , int* ar)
{
    // Complete this function
    int i;
    int max=ar[0];
    int count=1;
    for(i=1;i<n;i++)
    {
      if(max<ar[i])
      {
        max=ar[i];
        count=1;
      }
      else if(max==ar[i])
      {
        count++;
      }

    }

    return count;
}

int main()
{
    int n;
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++)
    {
       scanf("%i",&ar[ar_i]);
    }
    int result = birthdayCakeCandles(n, ar);
    printf("%d\n", result);
    return 0;
}
