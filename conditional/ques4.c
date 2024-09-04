/*
OWNER : AGRATA SRIVASTAVA   DATE:3-9-2024

Program to check temperature and print
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int temp;
	
	printf("Enter a temperature");
	scanf("%d",&temp);

	if(temp>30)
		printf("It's hot outside! Stay hydrated!\n");

	else if(temp >=20 && temp<=30)
		printf("The weather is nice and warm\n");

	else if(temp>=10 && temp<=19)
		printf("It's a bit chilly! Wear a jacket outside.\n");
	
	else
		printf("It's cold outside,stay warm!\n");

	return EXIT_SUCCESS;
}
