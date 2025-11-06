#include<stdio.h>
int main()
{
	int a[10][10],m,n;
	int i,j,s;
	printf("Enter no. of rows and columns:");
	scanf("%d%d",&m,&n);
	if(m==n)
    {
		printf("Enter %d elements\n",m*n);
		for(i=0;i<m;i++)
	  {
		  for(j=0;j<n;j++)
		  {
			scanf("%d",&a[i][j]);
		  }
	  }
	  s=0;
      for(i=0;i<m;i++)
      {
		   for(j=0;j<n;j++)
		  {
			 if(i==j)
			 s=s+a[i][j];
	   	  }
      }
      	printf("Trace of matrix is %d\n",s);
    }
    else
    {
    	printf("PLEASE ENTER SQUARE MATRIX\n");
	}
	return 0;
}

