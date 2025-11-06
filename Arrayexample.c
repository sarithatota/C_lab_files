#include<stdio.h>
int main()
{
	int a[20],n,i;
	printf("Enter size of an array=");
	scanf("%d",&n);
	printf("Enter %d elements=\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array Elements are=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
