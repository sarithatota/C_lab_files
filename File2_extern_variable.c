#include<stdio.h>
#include"File1_extern_variable.c"
int n=6;
int main()
{
	Example();
		printf("\nFile2=%d",n);
		return 0;
}
