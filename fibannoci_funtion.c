#include<stdio.h>
int fibanocci(int n)
//CODED BY SARITHA
{
	if(n==0)
	 return 0;
	else if(n==1)
	 return 1;
	 else
	 return (fibanocci(n-1)+fibanocci(n-2));
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",fibanocci(n));
	printf("ROLL NUMBER 24B11CS450");
	return 0;
}
