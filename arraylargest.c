#include<stdio.h>
#include<stdlib.h>

void main(){
	int *ptr,i;
	int n;
	int largest=0;
	int second_largest=0;
	printf("Enter the no. of elements\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for (i=0;i<n;i++){
		printf("Enter the %d th element\n",i);
		scanf("%d",&ptr[i]);
	}
	for (i=0;i<n;i++){
		if (ptr[i]>largest){
			largest=ptr[i];
		}
	}
	for (i=0;i<n;i++){
		if (ptr[i]>second_largest && ptr[i]<largest){
			second_largest=ptr[i];
		}
	}
	printf("Largest----%d\n",largest);
	printf("Second largest----%d\n",second_largest);
}
	
