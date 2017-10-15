#include<stdio.h>

void sort(int *a,int first,int last){
	int key,x,y;
	if (first<last){
		x=first;
		y=last;
		key=a[first];
	
		while(x<y){
			x++;
			while(a[x]<key && x<y)
				x++;
			while(a[y]>key)
				y--;
			if(x<y){
				int t=a[x];
				a[x]=a[y];
				a[y]=t;
			}
		}
		int s=a[first];
		a[first]=a[y];
		a[y]=s;
		sort (a,first,y-1);
		sort (a,y+1,last);	
	}
}
void main(){
	int a[8]={5,6,8,1,10,2,3,14};
	//int b[5];
	sort(a,0,7);
	int i;
	for (i=0;i<8;i++){
		printf("%d\n",a[i]);
	}
}
