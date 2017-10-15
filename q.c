#include<stdio.h>
#include<stdlib.h>

int f=0;
int r=-1;


void insert(int *q,int n){
	f=0;
	if(r==n-1)	
		printf("q Full\n");
	else{
		r++;
		printf("Element----");
		scanf("%d",&q[r]);
	}
	int i;
	for (i=f+1;i<=r;i++){
		int j=i;
		while(q[j]<q[j-1] && j>0){
			int t = q[j];
			q[j] = q[j-1];
			q[j-1]=t;
			j--;
		}
	}
}

void delete(int *q,int n){
	if (f>r || r==-1)
		printf("q Empty\n");
	else
		f++;
}

void display(int *q,int n){
	int i;
	if (f>r || r==-1)
		printf("Q Empty\n");
	else{
		printf("Q elements are\n");
		for(i=f;i<r+1;i++)
			printf("%d\t",q[i]);
	}
}

void main(){
	int *q,n;
	printf("Enter the size of queue");
	scanf("%d",&n);
	q=(int*)malloc(n*sizeof(int));
	int choice =1;
	printf("\n1-Insert\n2-Delete\n3-display\n4-Exit");
	
	while(choice){
		printf("Enter the option--");
		int option;
		scanf("%d",&option);
		switch (option){
			case 1:
				insert(q,n);
				break;
			case 2:
				delete(q,n);
				break;
			case 3:
				display(q,n);
				break;
			case 4:
				choice =0;
				break;
		}	
	}
}
