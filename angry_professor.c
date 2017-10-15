#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int test_case=0;

	scanf("%d",&test_case);

	int j = 0;

	int *a3 = (int *)malloc(sizeof(int)*test_case);

	for(j=0;j<test_case;j++)
	{

		int a1[2];

		int i = 0;

		int count = 0;

		while(i<2 && (scanf("%d",&a1[i])==1))
		{
			i++;
		}

		int *a2 = (int *)malloc(sizeof(int)*a1[0]);

		i = 0;

		while(i<a1[0] && (scanf("%d",&a2[i])==1))
		{
			i++;
		}

		for(i=0;i<a1[0];i++)
		{
			if(a2[i]>=0)
			{
				count++;
			}
		}

		if(count<a1[1])
		{
			a3[j] = 1;
		}
		else
		{
			a3[j] = 0;
		}

	}

	for(j=0;j<test_case;j++)
	{

		if(a3[j]==1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}

	return 0;

}