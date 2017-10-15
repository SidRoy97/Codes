#include<stdio.h>
#include<stdlib.h>

typedef struct student{
	char name[10];
	int roll_no;
}STUDENT;

void main(){
	STUDENT s[2]={{"Shahid",10},{"Tayeb",30}};
	STUDENT *ptr;
	ptr=&s;
	printf("%s\t%d",ptr[1].name,ptr[1].roll_no);
}

