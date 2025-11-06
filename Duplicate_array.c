#include<stdio.h>
int main()
{
	int arr[100],n,i,j;
	printf("Enter the no. of elements in the array:");
	scanf("%d",&n);
	printf("Enter %d integers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("%d ",arr[i]);
				break;
			}
		}
	}		
	return 0;
}
