#include<stdio.h>
int main()
{
	int a[20],n,i;
	printf("Enter size of an array:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	int max_pos=0;
	int min_pos=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			max_pos=i+1;
		}
		if(a[i]<min)
		{
			min=a[i];
			min_pos=i+1;
		}
	}
        printf("MAX element is %d is located at %d\n",max,max_pos);
		printf("MIN element is %d is located at %d\n",min,min_pos);
		return 0;	
}
