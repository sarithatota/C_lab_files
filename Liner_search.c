#include<stdio.h>
int main()
{
	int a[20],n,i,pos,key,flag;
	printf("Enter size of an array:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ENTER ELEMENT TO BE SEARCH\n");
	scanf("%d",&key);
	flag=0;
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			flag=1;pos=i+1;
			break;
		}
	}
	if(flag==1)
	{
		printf("ELEMENT %d FOUND AT %d\n",key,pos);
	}
	else
	{
		printf("ELEMENT %d NOT FOUND",key);
	}
		return 0;
}
