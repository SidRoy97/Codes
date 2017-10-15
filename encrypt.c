#include<stdio.h>
#include<string.h>

void main(){
	char mess[50];
	char encrypt[50];
	char key;
	char decrypt[50];
	printf("Enter Message\n");
	gets(mess);
	int len = strlen(mess);
	printf("Enter the key\n");
	scanf("%c",&key);
	int i;
	//Encryption
	for (i=0;i<len;i++){
		encrypt[i] = mess[i]^key;
	}
	printf("Encrypted message\n%s\n",encrypt);
	//Decryption
	for (i=0;i<len;i++)
		decrypt[i] = encrypt[i]^key;
	printf("Decrypted message\n%s\n",decrypt);
} 
