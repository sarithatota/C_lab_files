#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	int i,alpha=0,upper=0,lower=0,vowel=0,cons=0,digit=0,space=0,spl=0;
	printf("Enter a string ");
	scanf("%[^\n]",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if((s1[i]>='A' && s1[i]<='Z') || (s1[i]>='a' && s1[i]<='z'))
		{
			alpha++;
			if(s1[i]>='A' && s1[i]<='Z')
			{
				upper++;
			}
			if(s1[i]>='a' && s1[i]<='z')
			{
				lower++;
			}
			switch(s1[i])
			{
				case 'a':case 'A':
				case 'e':case 'E':
				case 'i':case 'I':
				case 'o':case 'O':
				case 'u':case 'U':	
				vowel++;
				break;
			default:
				cons++;
			}
		}
		else if(s1[i]>='0' && s1[i]<='9')
		{
			digit++;
		}
		else if(s1[i]==' ')
		{
			space++;
		}
		else
		{
			spl++;
		}
	}
	printf("\nNO. OF ALPHABATES IS %d",alpha);
	printf("\nNO. OF UPPERCASE ALPHABETS IS %d",upper);
	printf("\nNO. OF LOWERCASE ALPHABTES IS %d",lower);
	printf("\nNO. OF VOWELS IS %d",vowel);
	printf("\nNO. OF CONSONANTS IS %d",cons);
	printf("\nNO. OF DIGITS IS %d",digit);
	printf("\nNO. OF SPACES IS %d",space);
	printf("\nNO. OF SPECIAL CHARACTERS IS %d",spl);
	return 0;
}
