#include<stdio.h>
#include<string.h>
//CODED BY SARITHA
int main()
{
	char s1[100];
	int i;
	printf("Enter a string ");
	scanf("%[^\n]",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if((s1[i]>='A' && s1[i]<='Z') || s1[i]>='a' && s1[i]<='z')
		{
			if(s1[i]>='A' && s1[i]<='Z')
			{
			  s1[i]=s1[i]+32;
			}
			else
			{
			   s1[i]=s1[i]-32;
		    }
		}
	}
	printf("\nNEW STRING IS %s",s1);
	printf("\nROLL NUMBER 24B11CS450");
	return 0;
}
