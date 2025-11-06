#include<stdio.h>
int main()
{
	int a[20],n,i,p;
	printf("Enter size of an array=");
	scanf("%d",&n);
	printf("Enter %d elements=\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=1;
	for(i=0;i<n;i++)
	{
	   p=p*a[i];
	}
	printf("Product is %d",p);
	return 0;
}
