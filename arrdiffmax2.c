#include<stdio.h>
#include<stdlib.h>
void main(){
	int *a;
	int i,j;
	int n;
	printf("Enter the no. of elements\n");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for (i=0;i<n;i++){
		printf("Enter the element\n");
		scanf("%d",&a[i]);
	}
	
	for (i=1;i<n;i++){
		j=i;
		while(a[j]<a[j-1] && j>0){
			int t=a[j];
			a[j]=a[j-1];
			a[j-1]=t;
			j--;
		}
	}
	printf("Largest diff--%d\n",a[n-1]-a[0]);
	printf("Nos.--%d  %d\n",a[n-1],a[0]);
}
		
