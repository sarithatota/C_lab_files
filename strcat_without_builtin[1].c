#include<stdio.h>
//CODED BY SARITHA
void string(char dest[],char src[])
{
	int i=0,j=0;
	while(dest[i]!='\0')
	{
		i++;
	}
	while(src[j]!='\0')
	{
		dest[i]=src[j];
		i++;
		j++;
	}
	dest[i]='\0';
}
int main()
{
	char s1[100],s2[100];
	printf("Enter a first string ");
	scanf("%s",s1);
	printf("Enter a second string");
	scanf("%s",s2);
	string(s1,s2);
	printf("Concatenated string:%s",s1);
	printf("\nROLL NUMBER 24B11CS450");
	return 0;
}
