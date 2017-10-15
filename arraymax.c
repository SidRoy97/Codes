#include<stdio.h>
#include<stdlib.h>

void main(){
	int *a,n;
	printf("size--");
	scanf("%d",&n);
	int j;
	printf("Enter %d elements--",n);
	a = (int*)malloc(n*sizeof(int));
	for(j=0;j<n;j++){
		
		scanf("%d",&a[j]);
	}
	/*int max=a[0];
	for(j=0;j<n;j++){
		if(a[j]>max){
			max = a[j];
		}
	}
	printf("Max--%d\n",max);*/
	int i;
	for (j=0;j<n;j++){
		i=j;
		while(a[i]<a[i-1] && i>0){
			int t = a[i];
			a[i] = a[i-1];
			a[i-1]=t;
			i--;
		}
	}
	printf("Max---%d\n",a[n-1]);
}	
