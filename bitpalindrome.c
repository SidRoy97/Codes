#include<stdio.h>

void palindrome(int x){
	int y=x;
	int reverse=0;
	while(y){
		reverse = (reverse<<1) | (y&1);
		y=y>>1;
	}
	if (reverse == x)
		printf("PALINDROME\n");
	else
		printf("NOPE\n");
}

void main(){
	int choice=1;
	while(choice){
		int n;
		printf("Enter the no.--");
		scanf("%d",&n);	
		palindrome(n);
		printf("wanna continue(0/1)--");
		scanf("%d",&choice);
	}
}
