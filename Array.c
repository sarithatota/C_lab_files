#include<stdio.h>
int main()
{
	int a[4]={1,2,3,4};
	printf("%d,%u\n%d,%u\n%d,%u\n%d,%u\n",a[0],&a[0],a[1],&a[1],a[2],&a[2],a[3],&a[3]);
	return 0;
}
