#include<stdio.h>
int main()
{
	int a[10],n,i,j,t;
	printf("Enter no. of elements");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("BEFORE SORTING\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
     	if(a[j]>a[j+1])
      {
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
	  }
        }
   }
    printf("AFTER SORTING\n");
    for(i=0;i<n;i++)
    {
    	printf("%d ",a[i]);
	}
	return 0;
}

