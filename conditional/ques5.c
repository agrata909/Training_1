/*
OWNER : AGRATA SRIVASTAVA
BMI CALCULATOR
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	float height;
	float weight;
	float bmi;
	
	printf("Enter height in meters");
	scanf("%f",&height);
	
	printf("Enter weight in kgs");
	scanf("%f",&weight);
	
	bmi= weight / (height * height);
	printf("\nBMI = %f\n ",bmi);

	if(bmi<18.5)
		printf("Underweight\n");
	else if(bmi >18.5 && bmi < 24.9)
		printf("Normal Weight\n");
	else if(bmi > 25 && bmi <29.9)
		printf("Overweight\n");
	else
		printf("Obesity\n");

	return EXIT_SUCCESS;
}
		
