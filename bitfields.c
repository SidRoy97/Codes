#include<stdio.h>

struct student{
	unsigned int a:3;
	signed int b:4;
}s;

void main(){
	printf("%d\n",sizeof(s));
	s.a=8;
	s.b=8;
	printf("%u\n%d\n",s.a,s.b);
} 
