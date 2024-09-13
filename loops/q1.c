
/*Owner :AGRATA SRIVASTAVA DATE:4-9-24
Write a program that prompts the user for a positive integer and then computes the sum of all the digits of the number */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number;
	int result=0;

	printf("Enter a number");
	scanf("%d",&number);
	int num=number;
	
	while(number!=0)
	{

		result=result+number%10;
		number=number/10;
	}

	printf("Sum of %d is %d\n",num,result);

	return EXIT_SUCCESS;
}
