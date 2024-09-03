
/*
OWNER : AGRATA SRIVASTAVA   DATE:3-9-2024

Program to convert fahrenheit
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	float temp;
	float result;
	printf("Enter temperature in Celsius");
	scanf("%f",&temp);
	
	result=(temp * 9/5) + 32;
	printf(" The temperature in Fahrenheit is %f\n",result);
	return EXIT_SUCCESS;
}
