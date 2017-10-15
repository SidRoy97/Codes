#include<stdio.h>
#include<string.h>
void main(){
	char str1[100]={"Shahid"};
	char str2[100]={"is awesome"};
	char *str;
	str = &str1;
	printf("%s\n",str1);
	printf("%s\n",str);
}
