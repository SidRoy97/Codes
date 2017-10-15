#include<stdio.h>
#include<string.h>

void main(){
	char str[50];
	char sub[50];
	printf("Enter string--");
	gets(str);
	printf("Enter substring---");
	gets(sub);
	int length1=strlen(str);
	int length2=strlen(sub);
	int i,found,j,k;
	printf("length1=%d\n",length1);
	printf("length2=%d\n",length2);
	int count=0;
	for (i=0;i<length1;i++){
		if (sub[0]==str[i]){
			found=1;
			j=1;
			k=i+1;
			for(;j<length2;j++,k++){
				if(sub[j]!=str[k]){
					found=0;
					break;
				}
			}
			if (found){
				count++;
				i=k;
			}
			
		}
	}
	printf("Occurence=%d\n",count);
}
