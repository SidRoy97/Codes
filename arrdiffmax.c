#include<stdio.h>
void main(){
	int a[5]={10,2,1,15,20};
	unsigned int largest=0;
	int x,y;
	int i,j;
	unsigned int k;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			k=a[i]-a[j];
			if (k>largest){
				x=a[i];
				y=a[j];
			}
		}
	}
	printf("two nos are--%d  %d\n",x,y);
}
