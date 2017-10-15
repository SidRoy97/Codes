#include<stdio.h>
typedef struct{
	int x;
	int y;

}point;
point p;

void main(){
	
	input(&p);
	printf("%d",p.y);
	printf("%d",p.x);
	
}

void input(point *p){
	printf("Enter x\n");
	scanf("%d",&p.x);
	printf("Enter y\n");
	scanf("%d",&p.y);
}

