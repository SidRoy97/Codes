#include<stdio.h>
#include<stdlib.h>

typedef struct student{
	char name[10];
	int roll_no;
}STUDENT;

void disp(STUDENT *p){
	printf("%s\t%d\n",p->name,p->roll_no);
}

void main(){
	STUDENT ptr={"Shahid",10};
	disp(&ptr);
}
	
