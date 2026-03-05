#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int i,len;
	printf("Enter any string ");
	scanf("%[^\n]",s1);
	len=strlen(s1);
	printf("\nLength is %d",len);
	strcpy(s2,s1);
	strrev(s2);
	printf("\nReverse string is %s",s2);
	strcat(s1,s2);
	printf("\nConcatenate string is %s",s1);
	printf("\nROLL NUMBER 24B11CS450");
	return 0;
}
