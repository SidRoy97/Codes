#include<stdio.h>
#include<string.h>
void conc(char *str1,char *str2);
void main(){
	char str1[100];
	char str2[100];
	gets(str1);
	gets(str2);
	conc(str1,str2);
}
	
	
	
void conc(char *str1,char *str2){
	int length1 = strlen(str1);
	int length2 = strlen(str2);
	int length = length1 + length2;
	
	int i,j=0;
	for (i=length1+1;i<length+1;i++){
		
		str1[i] = str2[j];
		j++;
		
	}
	str1[length+1]="\0";
	printf("%s\n",str1);
}

