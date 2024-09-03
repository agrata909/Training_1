/* OWNER : Agrata Srivastava
   Date : 3 Sept 24 

   To calculate area and circumference of a circle
*/

#include<stdio.h>
#include<stdlib.h>
#define PI 3.14   
int main()
{
	float radius;
	printf("\nEnter the radius of the circle");
	scanf("%f",&radius);

	printf("\nArea of Circle is : %f",PI*radius*radius);
	printf("\nCircumference of circle is %f\n",2*radius*PI);

	return EXIT_SUCCESS;
}
