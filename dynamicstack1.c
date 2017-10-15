#include<stdio.h>
#include<stdlib.h>
int top=-1;
int *stack;


void push(){
	if(top==9)	
		printf("Stack Full\n");
	else{
		top++;
		stack=(int*)malloc(sizeof(int));
		printf("Element----");
		scanf("%d",&stack[top]);
	}
}

void pop(){
	if (top==-1)
		printf("Stack Empty\n");
	else
		top=top-1;
}

void display(){
	int i;
	if (top==-1)
		printf("Stack Empty\n");
	else{
		printf("Stack elements are\n");
		for(i=top;i>=0;i--)
			printf("%d\t",stack[i]);
	}
}

void main(){
	
	printf("Enter the size of stack");
	
	display(stack);
	//printf("   %d   ",top);
	push(stack);
	//printf("   %d   ",top);
	push(stack);
	//printf("   %d   ",top);
	push(stack);
	//printf("   %d   ",top);
	display(stack);
	//printf("   %d   ",top);
	pop(stack);
	//printf("   %d   ",top);
	display(stack);
	//printf("   %d   ",top);
}
