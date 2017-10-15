#include<stdio.h>

void main(){
	char str[9];
	printf("Enter the string\n");
	scanf("%s",&str);
	char reverse[9];
	int i,j;
	for(i=8,j=0;i>=0,j<9;i--,j++){
		str[i]=reverse[j];
	}
	for (i=0;i<9;i++){
		printf("%c",reverse[i]);
	}
}
