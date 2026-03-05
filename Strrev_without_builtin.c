#include<stdio.h>
#include<string.h>
//CODED BY SARITHA
int main()
{
	char s[100];
	int i,len,t;
	printf("Enter any string ");
	scanf("%[^\n]",&s);
	len=0;
	for(i=0;s[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;i<len/2;i++)
	{
		t=s[i];
		s[i]=s[len-i-1];
		s[len-i-1]=t;
	}
	printf("Reversed string is %s",s);
	printf("\nROLL NUMBER 24B11CS450");
	return 0;
}
	
