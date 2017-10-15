#include<stdio.h>

void main(){
	FILE *r;
	r=fopen("fibonacci.c","r");
	char c;
	int line=1;
	printf("%d  ",line);
	while((c=getc(r))!=EOF){
		printf("%c",c);
		if(c=='\n'){
			line++;
			printf("%d  ",line);
		}
	}
	printf("%c%c%c%c",'\b','\b','\b','\b');
}
