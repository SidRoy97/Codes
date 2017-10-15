#include<stdio.h>
#include<stdlib.h>

typedef struct student{
	char name[10];
	int roll_no;
}STUDENT;


void input (STUDENT *s){
	
	printf("Name-\n");
	scanf("%s",&s->name);
	printf("Roll no.\n");
	scanf("%d",&s->roll_no);
	
}

void print (STUDENT *x){
	printf("Name---%s\nRoll no.---%d\n",x->name,x->roll_no);
}
void main(){
	STUDENT d;
	input(&d);
	print(&d);

}


/*If no return type is there in the fn the us pointers to add an display*/	
