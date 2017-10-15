#include<stdio.h>
#include<stdlib.h>

int fib(int n){
	if (n==0 || n==1)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}

void main(){
	int n,i;
	printf("Enter the no. of elements in fibonacci series\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){	
		printf("%d  ",fib(i));
	}
	printf("\n");
}
