#include<stdio.h>

typedef struct queue{
	int element;
	int priority;
}Q;

int r=-1;
int f=0;
Q q[10];

void insert(){
	int i;
	if(r>10)
		printf("Empty Q\n");
	else{
		r++;
		printf("Enter the element and its priority--");
		scanf("%d%d",&q[r].element,&q[r].priority);
	
		for(i=f+1;i<=r;i++){
			int j=i;
			while(q[i].priority<q[i-1].priority && j>0){
				Q t = q[i];
				q[i] = q[i-1];
				q[i-1] = t;
				j--;
			}
		}
	}
}

void delete(){
	if(r==-1 || f>r)
		printf("Empty Q\n");
	else
		f++;
}

void display(){
	if(r==-1 || f>r)
		printf("Empty Q\n");
	else{
		int i;
		printf("Presentimg the Queue\n");
		for(i=f;i<=r;i++){
			printf("%d  ",q[i].element);
		}
		printf("\n");
	}
}

void main(){
	int choice =1;
	printf("\n1-Insert\n2-Delete\n3-display\n4-Exit\n");
	
	while(choice){
		printf("Enter the option--");
		int option;
		scanf("%d",&option);
		switch (option){
			case 1:
				insert();
				break;
			case 2:
				delete();
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
