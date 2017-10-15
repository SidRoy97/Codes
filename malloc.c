#include<stdio.h>
#include<stdlib.h>

void main(){
	int *ptr,i;
	int n;
	int sum=0;
	printf("Enter the no. of elements\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for (i=0;i<n;i++){
		printf("Enter the %d th element\n",i);
		scanf("%d",&ptr[i]);
		sum = sum + ptr[i];
	}
	printf("Sum=%d\n",sum);
}
		
 
