#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[10];
	int roll_no;
};

void main(){
	typedef struct student STUDENT;

	printf("%d\n",sizeof(STUDENT));
	int n,i;
	printf("Enter the no. of students\n");
	scanf("%d",&n);
	STUDENT *ptr[n];
	for(i=0;i<n;i++){
		ptr[i]=(STUDENT*)malloc(sizeof(STUDENT));
		printf ("Enter the name of student %d\n",i);
		scanf("%s",&ptr[i]->name);
		printf ("Enter the roll no. of student %d\n",i);
		scanf("%d",&ptr[i]->roll_no);
	}
	for(i=0;i<n;i++){
		printf("Student %d\n",i+1);
		printf("Name---%s\nRoll no.---%d\n",ptr[i]->name,ptr[i]->roll_no);
	}
	//free(ptr[]);
}
		
