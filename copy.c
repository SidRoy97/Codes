#include<stdio.h>

void main(){
	FILE *r,*w;
	int lines=0;
	r=fopen("hello.c","r");
	w=fopen("copylargest.c","w");
	if (r==NULL){
		printf("ERROR");
		printf("No.of lines=0\n");
	}
	char c;
	while((c=fgetc(r))!=EOF){
		//putc(c,w);
		//printf("%c",c);
		if (c='\n')
			lines++;
	}
	printf("No.of lines=%d\n",lines);	
	fclose(r);
	fclose(w);
}
