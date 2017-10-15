#include<stdio.h>
void func1() __attribute__((constructor(102)));
void func2() __attribute__((constructor(101)));;

//#pragma startup func1
//#pragma end func2

void main(){
	printf("MAIN\n");
}

void func1(){
	printf("FUNC1\n");
}

void func2(){
	printf("FUNC2\n");
}
