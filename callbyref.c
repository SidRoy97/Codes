#include<stdio.h>
int foo(int*x,int *y);
void main(){
	int a=10,b=15;
	foo(&a,&b);
	printf("In main\n a=%d	b=%d\n",a,b);
	
}

int foo(int *a,int *b){
	*a=*a+10;
	*b=*b+15;
	printf("In foo\n a=%d	b=%d\n",*a,*b);	
}
	
