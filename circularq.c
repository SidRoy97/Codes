#include<stdio.h>

int q[5];
int r=-1;
int f=0;

void input(){
	if (r==(5-1))
		r=-1;
		f++;
	r++;
	printf("Enter the element to be inserted-");
	scanf("%d",&q[r]);
}
 void delete(){
	if (r==-1)
		printf("Empty queue\n");
	else if (f>r){
		f=0;
		r=-1;
	}	
	else
		f++;
}
void display(){
	if (r==-1 || f>r)
		printf("Empty queue\n");
	else{
		int i;
		printf("Your queue\n");
		for(i=f;i<=r;i++){
			printf("%d\t",q[i]);
		}
	}
}
void main(){
	int choice =1;
	printf("\n1-Insert\n2-Delete\n3-Display\n4-Exit\n");
	
	while(choice){
		printf("Enter the option--");
		int option;
		scanf("%d",&option);
		switch (option){
			case 1:
				input();
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
