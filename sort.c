#include<stdio.h>

void main(){
	int i,x;
	int a[5]={5,4,3,2,1};
	for (i=1;i<5;i++){
		x=i;
		while(a[x]<a[x-1] && x>0){
			int t = a[x];
			a[x] = a[x-1];
			a[x-1] = t;
			x--;
		}
	}
	for (i=0;i<5;i++)
		printf("a[%d]=%d\n",i,a[i]);

}

