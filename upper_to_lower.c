#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	int i;
	printf("Enter a string ");
	scanf("%[^\n]",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='A' && s1[i]<='Z')
		{
			s1[i]=s1[i]+32;
		}
	}
	printf("\nLOWER CASE STRING IS %s",s1);
	return 0;
}
