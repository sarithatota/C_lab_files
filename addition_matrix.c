#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],m,n;
	int i,j,p,q;
	printf("Enter no. of rows and columns a:");
	scanf("%d%d",&m,&n);
	printf("Enter no. of rows and columns b:");
	scanf("%d%d",&p,&q);
	if((m==p)&&(n==q))
    {
		printf("Enter %d elements A\n",m*n);
		for(i=0;i<m;i++)
	  {
		  for(j=0;j<n;j++)
		  {
			scanf("%d",&a[i][j]);
		  }
	  }
	 printf("Enter %d elements into B\n",p*q);
      for(i=0;i<p;i++)
      {
		   for(j=0;j<q;j++)
		  {
			scanf("%d",&b[i][j]);
	   	  }
      }
      for(i=0;i<m;i++)
      {
      	for(j=0;j<n;j++)
      	{
      		c[i][j]=a[i][j]+b[i][j];
		  }
	  }
	  printf("Matrix Addition elements are\n");
	  for(i=0;i<m;i++)
	  {
	  	for(j=0;j<n;j++)
	  	{
	  		printf("%d ",c[i][j]);
		  }
		  printf("\n");
	  }
    }
    else
    {
    	printf("MATRIX ADDITION DOESNOT EXSIST\n");
	}
	return 0;
}

