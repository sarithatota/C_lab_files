#include<stdio.h>
int main()
{
	int a[100],n,i,left,right,pos,mid,key;
	int flag=0;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to search\n");
	scanf("%d",&key);
	left=0;right=n-1;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(key==a[mid])
		{
			flag=1;pos=mid+1;break;
		}
		else if(key<a[mid])
			right=(mid-1);	
		else
			left=mid+1;
	}
	if(flag==1)
	{
		printf("%d is found at %d ",key,pos);
	}
	else
	{
		printf("Not found");
	}
	return 0;
}
