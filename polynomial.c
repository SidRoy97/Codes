#include<stdio.h>
#include<stdlib.h>

void main(){
	printf("Enter the degree-");
	int i,n,x,c,*coeff,sum=0;
	scanf("%d",&n);
	printf("Enter the coeff of\n");
	coeff=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("X^%d---",i+1);
		scanf("%d",&coeff[i]);
	}
	printf("Enter the value of x--");
	scanf("%d",&x);
	printf("Enter the value of constant--");
	scanf("%d",&c);
	for(i=0;i<n;i++){
		sum = sum + coeff[i]*x;
		x=x*x;
	}
	sum = sum + c;
	printf("Evaluation of the polynomial gives %d\n",sum);
}
