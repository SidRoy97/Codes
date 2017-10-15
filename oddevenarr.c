#include<stdio.h>
#include<stdlib.h>

void main(){
	int *arr,*even,*odd,i;
	int n,j=0,k=0;
	printf("Enter the no. of elements\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	odd=(int*)malloc(n*sizeof(int));
	even=(int*)malloc(n*sizeof(int));
	
	for (i=0;i<n;i++){
		printf("Enter the element\n");
		scanf("%d",&arr[i]);
	}
	
	for (i=0;i<n;i++){
		if(arr[i]%2 == 0){
			even[j]=arr[i];
			j++;
		
		}
	}
	for (i=0;i<n;i++){
		if(arr[i]%2 != 0){
			odd[k]=arr[i];
			k++;
			
		}
	}
	printf("Even array\n");
	for (i=0;i<n;i++){
		if(even[i]==0 )
			break;
		printf("%d  ",even[i]);
	}
	printf("\n");
	printf("Odd array\n");
	for (i=0;i<n;i++){
		if(odd[i]==0)
			break;
		printf("%d  ",odd[i]);	
	}
	printf("\n");
}		
