#include<stdio.h>
int sum_of_array(int [],int);
int main()
{
	int a[100],n,s,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	s=sum_of_array(a,n);
	printf("sum=%d",s);
	return 0;
}
int sum_of_array(int a[],int n)
{
	int s=0,i;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	return s;
}
