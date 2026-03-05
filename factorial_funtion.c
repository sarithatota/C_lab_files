#include<stdio.h>
int factorial(int n)
//CODED BY SARITHA
{
	if(n==0) //base or terminate condition
	{
		return 1;
	}
	else
	{
		return (n*factorial(n-1)); //recursive call
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",factorial(n));
	printf("ROLL NUMBER 24B11CS450");
	return 0;
}
