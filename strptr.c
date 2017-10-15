#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[10];
	int roll_no;
};

void main(){
	typedef struct student STUDENT;
	STUDENT *ptr;
	printf("%d\n",sizeof(STUDENT));
	int n,i;
	printf("Enter the no. of students\n");
	scanf("%d",&n);
	ptr=(STUDENT*)malloc(n*sizeof(STUDENT));
	for(i=0;i<n;i++){
		printf ("Enter the name of student %d\n",i);
		scanf("%s",&ptr[i].name);
		printf ("Enter the roll no. of student %d\n",i);
		scanf("%d",&ptr[i].roll_no);
	}
	for(i=0;i<n;i++){
		printf("Student %d\n",i);
		printf("Name---%s\nRoll no.---%d\n",ptr[i].name,ptr[i].roll_no);
	}
	free(ptr);
}
		
