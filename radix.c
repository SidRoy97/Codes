#include<stdio.h>
#include<stdlib.h>

void print(int *a,int n){
	int i;
	for (i=0;i<n;i++)
		printf("%d  ",a[i]);
	
	printf("\n");
}

void radix(int *a,int n){
	int i;
	int b[100];
	int m=0,exp=1;
	for(i=0;i<n;i++){
		if(a[i]>m)
			m=a[i];
	}
	printf("max--%d\n",m);
	while (m/exp >0){
		int box[10]={0};
		for(i=0;i<n;i++)
			box[a[i]/exp%10]++;
		for(i=1;i<10;i++)
			box[i] += box[i-1];
		for(i=n-1;i<=0;i--)
			b[--box[a[i]/exp%10]]=a[i];
		for(i=0;i<n;i++)
			a[i]=b[i];
		exp = exp *10;
		printf("\nPass: ");
		print(a,n);
	}
}

void main(){
  	int a[100],n;
	printf("size--");
	scanf("%d",&n);
	int j;
	printf("Enter %d elements--",n);
	for(j=0;j<n;j++){
		scanf("%d",&a[j]);
	}
	radix(a,n);
	print(a,n);		
}
