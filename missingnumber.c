#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int partition (int arr[],int low,int high)
{
    // pivot (Element to be placed at right position)
    int pivot = arr[high];

    int i = (low - 1);  // Index of smaller element

    int j;
    int temp=0;
    for (j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element

            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            //swap arr[i] and arr[j]
        }
    }
    //swap arr[i + 1] and arr[high])

    temp = arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;

    return (i + 1);
}

void quickSort(int arr[],int low,int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}

int main()
{

  int m,n,i;

  scanf("%d",&m);
  int *a1 = (int *)malloc(sizeof(int)*m);
  for(i=0;i<m;i++)
  {
    scanf("%d",&a1[i]);
  }

  scanf("%d",&n);
  int *a2 = (int *)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a2[i]);
  }

  quickSort(a1,0,m-1);
  quickSort(a2,0,n-1);

  for(i=0;i<m;i++)
  {
    printf("%d\n",a1[i]);
  }

  printf("\n");

  for(i=0;i<n;i++)
  {
    printf("%d\n",a2[i]);
  }

  printf("\n");

  int count1=0;
  int count2;
  int j;
  int temp = 1;

  for(j=0;j<n;j++)
  {
    if(j==0||temp==1)
    {
      count2=1;
      for(i=0;i<m;i++)
      {
        if(a2[j]==a1[i])
        {
          count1++;
        }
      }
      temp=0;
    }
    else
    {
      if(a2[j]==a2[j-1])
      {
        count2++;
      }
      else
      {
        if(count2!=count1)
        {
          printf("%d %d %d \n",a2[j-1],count2,count1);
          temp=1;
          count1=0;
        }
        else
        {
          printf("%d %d \n",count2,count1);
          j--;
          temp=1;
          count1=0;
        }
      }
    }
  }




    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
