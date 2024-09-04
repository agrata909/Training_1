
/* OWNER:AGRATA SRIVASTAVA  DATE:3-9-2024
QUES 6 : grade 
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int percentage;

	printf("Enter the percentage obtained");
	scanf("%d",&percentage);


	if(percentage>=90)
		printf("Grade A\n");
	
	else if(percentage>=80)
		printf("Grade B\n");

	else if(percentage >=70)
		printf("Grade C\n");

	else if(percentage >=60)
		printf("Grade D\n");
	
	else
		printf("Fail");

	return EXIT_SUCCESS;	
}
