#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number:");
	scanf("%d",&n);
	switch(n%2)
	{
	case 0:
	printf("Given number is odd");
	break;
	case 1:
	printf("Given number is even");
	break;
	default :
	printf("Invalid input");
	break;
	}
    return 0;
}

