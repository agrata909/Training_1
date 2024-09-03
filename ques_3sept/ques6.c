/* OWNER:AGRATA DATE:3-9-24
WRITE A PROGRAM THT CALCULATES BMI BASED ON USER INPUT FOR WEIGHT IN KG AND HEIGHT IN METERS */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float height;
	float weight;
	float bmi;

	printf("Enter height in meters : ");
	scanf("%f",&height);

	printf("Enter weight in kgs : ");
	scanf("%f",&weight);

	bmi= weight / (height*height);
	printf("BMI = %f\n",bmi);

	return EXIT_SUCCESS;
}
