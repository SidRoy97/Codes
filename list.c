#include<stdio.h>
#include<stdlib.h>

typedef struct list{
	int element;
	struct list *next;
}LIST;

LIST *temp=NULL,*head=NULL;

void frequency(int n){
	temp = head;  
	int f=0;
	if (head==NULL){
		printf("LIST EMPTY");
	}	
	else{
		while(temp !=NULL){
			if (n==temp->element)
				f++;
			temp = temp->next;
		}
	}
	printf("Frequency of %d = %d\n",n,f);
}

void main(){
	int choice =1,count=0;
	while (choice){
		temp = (LIST*)malloc(sizeof(LIST));
		printf("Enter Element--");
		scanf("%d",&temp->element);
		if(head==NULL){
			temp->next=NULL;
			head =temp;
		}
		else{
			temp->next=head;
			head = temp;
		}
		printf("Wanna continue(0/1)--");
		scanf("%d",&choice);
	}
	printf("\t\tLIST\n");
	while (temp != NULL){
		count++;
		printf("%d  ",temp->element);
		temp = temp->next;
	}
	printf("\n");
	printf("Nodes=%d\n",count);
	
	//FREQUENCY	
	
	choice = 1;
	while(choice){
		int n;
		printf("Enter the element whose frquency to be found--");
		scanf("%d",&n);		
		frequency(n);
		printf("More frequencies?(0/1)---");
		scanf("%d",&choice);
	}
}
