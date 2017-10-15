#include<stdio.h>
#include<string.h>
void main(){
	char *str1;
	str=(char*)malloc(7*sizeof(char));
	str1 ="Shahid";
	(str1+5)="f";
	printf("%s\n",str1);
}
