#include<stdio.h>
#include<stdlib.h>

void main(){
	int n,i,*fib;
	printf("Enter the no.terms-");
	scanf("%d",&n);
	fib=(int*)malloc(n*sizeof(int));
	for (i=0;i<n;i++){
		if (i==0||i==1)
			fib[i]=i;
		else
			fib[i]=(fib[i-1]+fib[i-2]);
	}
	for (i=0;i<n;i++)
		printf("%d  ",fib[i]);
	printf("\n");
}
