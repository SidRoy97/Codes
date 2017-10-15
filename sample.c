#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	char* s = (char *)malloc(10240 * sizeof(char));
	scanf("%[^\n]s",s);
	printf("%s\n",s);
	return 0;
}
