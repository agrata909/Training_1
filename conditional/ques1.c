/*
OWNER : AGRATA SRIVASTAVA   DATE:3-9-2024

Program to check even and odd
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number;
	
	printf("Enter a number");
	scanf("%d",&number);

	if(number%2==0)
	{
		printf("Number is even\n");
	}
	else
	{
		printf("Number is odd\n");
	}
	return EXIT_SUCCESS;
}
