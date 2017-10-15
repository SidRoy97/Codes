#include<stdio.h>

int top=-1;
int stack[10];

void push(){
	if(top==9)	
		printf("Stack Full\n");
	else{
		top++;
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

void display(){3
6*2/87\][=	int i;
	if (top==-1)
		printf("Stack Empty\n");
	else{
		printf("Stack elements are\n");
		for(i=top;i>=0;i--)
			printf("%d\n",stack[i]);
	}
}

void main(){
	int choice =1;
	printf("\n1-Push\n2-pop\n3-display\n4-Exit");
	
	while(choice){
		printf("Enter the option--");
		int option;
		scanf("%d",&option);
		switch (option){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				choice =0;
				break;
		}
	}
}

