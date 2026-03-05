#include<stdio.h>
int gcd(int a,int b)
{
	int r;
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",gcd(a,b));
	return 0;
}
