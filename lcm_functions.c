#include<stdio.h>
int gcd(int,int);
int gcd(int a,int b)
//CODED BY SARITHA
{
    if(b==0)
      return a;
    else 
      gcd(b,a%b);
}
int main()
{
	int a,b,g,l;
	scanf("%d%d",&a,&b);
	if(a>b)
	  g=gcd(a,b);
	else
	  g=gcd(b,a);  
	l=(a*b)/g;
	printf("%d\n",l);
	printf("ROLL NUMBER 24B11CS450");
}
