
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

	if(number>=90 && number<=100)
	{
		printf("Grade : A \n");
	}
	else if(number >=80 && number<=89 )
	{
		printf("Grade : B \n");
	}
	else if(number >=70 && number<=79)
	{
		printf("Grade : C \n");
	}
	else if(number>=60 && number<=69)
	{
		printf("Grade : D \n");
	}
	else
		printf("Grade : F\n");
	return EXIT_SUCCESS;
}
