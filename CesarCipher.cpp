#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Encrypt (char ClearText[],int Key,char CipherText[])
{
	int letter;
	int n= strlen(ClearText);
	int i=0;
	
	while (i<n)
	{
		if (ClearText[i]>= 65 && ClearText[i]<=90)
		{
			CipherText[i]=((ClearText[i]-65)+Key)%26+65;
		}
		
		else if (ClearText[i]>= 97 && ClearText[i]<=122)
		{
			CipherText[i]=((ClearText[i]-97)+Key)%26+97;
		}
		else CipherText[i]=ClearText[i];
		i++;
	}
 } 
 
 
 
 int main()
 {
 	char ClearText[100];
 	char CipherText[100]=" ";
 	int Key;
 	printf("type your password: ");
 	gets(ClearText);
 	printf("Enter your key: ");
 	scanf("%d",&Key);
 	Encrypt(ClearText,Key,CipherText);
 	printf("here your ciphertext: \n");
 	puts(CipherText);
 	
 	return(0);
 }
