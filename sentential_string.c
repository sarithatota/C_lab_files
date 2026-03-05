#include<stdio.h>
#include<string.h>
//CODED BY SARITHA
int main()
{
	char s1[100];
	printf("Enter a string ");
	scanf("%[^\n]",s1);
	if(s1[0]>='a' && s1[0]<='z')
	{
		s1[0]=s1[0]-32;
	}
	printf("\nSENTENTIAL STRING IS %s",s1);
	printf("\nROLL NUBER 24B11CS450");
	return 0;
}
