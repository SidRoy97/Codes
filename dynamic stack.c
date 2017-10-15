#include<stdio.h>

int top=-1;


void push(int *stack){
	if(top==9)	
		printf("Stack Full\n");
	else{
		top++;
		printf("Element----");
		scanf("%d",&stack[top]);
	}
}

void pop(int *stack){
	if (top==-1)
		printf("Stack Empty\n");
	else
		top=top-1;
}

void display(int *stack){
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
	int *stack;
	printf("Enter the size of stack");
	stack=(int*)malloc(sizeof(int));
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
