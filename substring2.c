#include<stdio.h>
#include<string.h>

void main(){
	char str[50];
	char sub[50];
	printf("Enter string--");
	gets(str);
	printf("Enter substring---");
	gets(sub);
	int count=0;
	char *ptr;
	ptr=&str;
	while((ptr=strstr(ptr,sub)) && *ptr!='\0'){
		count++;
		ptr++;
	}
	printf("Occurrence=%d\n",count);
}
