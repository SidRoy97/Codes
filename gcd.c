#include<stdio.h>
int main(){
	int a,b,i,j;
	printf("Enter two nos. a and b");
	scanf("%d%d",&a,&b);
	if (a>b){
		for(i=a;i>0;i--){
			if (a%i==0 && b%i==0){
				printf("GCD=%d",i);
				break;
			}
		}
	}
	else{
		for(j=b;j>0;j--){
			if (b%j==0 && a%j==0){
				printf("GCD=%d",j);
				break;
			}
		}
	}
}
