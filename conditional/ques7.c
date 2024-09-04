
/* OWNER:AGRATA SRIVASTAVA  DATE:3-9-2024
QUES 6 : grade 
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number;

	printf("Enter a number");
	scanf("%d",&number);


	if(number>0)
		printf("Positive number\n");
	
	else if(number<0)
		printf("Negative Number\n");

	else
		printf("Zero");

	return EXIT_SUCCESS;	
}
