/*
OWNER : AGRATA SRIVASTAVA   DATE:3-9-2024

Program to check maximum of three numbers
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	int b;
	int c;

	printf("Enter three numbers");
	scanf("%d%d%d",&a,&b,&c);

	if(a > b && a > c )
	{
		printf("A is the maximum number\n");
	}
	else if(b > c && b > a)
	{
		printf("B is the maximum number\n");
	}
	else
	{
		printf("C is the maximum number\n");
	}

	return EXIT_SUCCESS;
}
