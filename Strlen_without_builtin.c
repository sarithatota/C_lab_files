#include<stdio.h>
#include<string.h>
//CODED BY SARITHA
int main()
{
	char s[100];
	int i,len;
	printf("Enter any string ");
	scanf("%[^\n]",&s);
	len=0;
	for(i=0;s[i]!='\0';i++)
	{
		len++;
	}
	
	printf("Length of string is %d",len);
	printf("\nROLL NUMBER 24B11CS450");
	return 0;
}
