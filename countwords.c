#include<stdio.h>
#include<string.h>

int EnglishChar(char d){
	if ((d>=65 && d<=90) || (d>=97 && d<=122))
		return 1;
	return 0;
}

void main(){
	char str1[100];
	printf("Enter the string\n");
	gets(str1);
	int i,Wordflag=0,words=0;
	int length = strlen(str1);
	for (i=0;i<length;i++){
		if (EnglishChar(str1[i]) && !Wordflag){
			words++;
			Wordflag=1;
		}
		else if(!EnglishChar(str1[i]) && Wordflag){
			Wordflag=0;
		}
	}
	printf("Words=%d\n",words);
}
