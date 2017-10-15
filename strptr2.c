#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[10];
	int roll_no;
};

void main(){
	typedef struct student STUDENT;
	STUDENT b={"Shahid",10},*c;
	
	c=&b;
	printf("%s    %d\n",b.name,b.roll_no);
	printf("%s    %d\n",c->name,c->roll_no);
}

