#include<stdio.h>

int mod(int a,int b,int p){
	int mod1;
	if(b==0)
		mod1=1%p;
	else if (b==1)
		mod1=a%p;
	else
		mod1=(((a*a)%p)*mod(a,b-2,p))%p;
	return mod1;
}
void main(){
	int a,b,p;
	printf("Enter the number,exponent,mod---");
	scanf("%d%d%d",&a,&b,&p);
	int z=mod(a,b,p);
	printf("%d\n",z);
}
