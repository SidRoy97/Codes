#include<stdio.h>
#include<string.h>

void main(){
	char str1[25];
	char pattern[25];
	int compcount=0,num=0;;
	int position[15];
	printf("Enter the string--");
	gets(str1);
	printf("Enter the pattern--");
	gets(pattern);
	int len,plen,i;
	len=strlen(str1);
	plen=strlen(pattern);
	int table[25];
	for (i=0;i<25;i++){
		table[i]=plen;
	}
	for (i=0;i<(plen-1);i++){
		table[pattern[i]] = plen - i - 1;
	}
	table[pattern[plen-1]] = plen;
	printf("\nSHIFT TABLE\n");
	for (i=0;i<=plen;i++)
		printf("%d  ",table[pattern[i]]);
	printf("\n");

	int patcount = plen - 1;
	int count;
	while(patcount<len){
		count = 0;
		while (count < plen){
			if (str1[patcount-count] != pattern[plen-1-count]){
				compcount++;
				break;
			}
			else	
				count++;
		}
		if (count == plen){
			num++;
			position[num-1]=(patcount-count+1);
			patcount = patcount + plen;
		}
		else
			patcount = patcount + table[str1[patcount]];
	}
	printf("Occurrence-----%d\n",num);
	printf("No. of comparisons---%d\n",compcount);
	printf("%s occurs at\n",pattern);
	for (i=0;i<num;i++)
		printf("%d  ",position[i]);
	printf("\n");
}
 		
