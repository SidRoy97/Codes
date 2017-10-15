#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long int *arr = malloc(sizeof(long long int) * 5);
    int arr_i;
    for(arr_i = 0; arr_i < 5; arr_i++)
    {
       scanf("%lld",&arr[arr_i]);
    }

    long long int min,max = arr[0];
    int count = 0;
    long long int sum;
    int i,j;

    for(j = 0;j < 5;j++)
    {
        sum = 0;

        for(i = 0;i < 5;i++)
        {
            if(count != i)
            {
                sum = sum + arr[i];
            }
        }

        count++;

        if(sum > max)
        {
            max = sum;
        }
        else if(sum < min)
        {
            min = sum;
        }

    }

    printf("%lld %lld",min,max);

    return 0;
}
