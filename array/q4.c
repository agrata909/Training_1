/* OWNER :AGRATA SRIVASTAVA DATE:4-9-2024 
Write a program to calculate the sum and average of elements in an array
*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
	int arr[MAX];
	int sum=0;
	int avg=0;
	int index;
	printf("Enter the elements in array: ");
	for(index=0;index<MAX;index++)
	{
		scanf("%d",&arr[index]);
	}
	
	printf("Elements in the array are: ");
	for(index=0;index<MAX;index++)
	{
		printf("%d ",arr[index]);
	}

	for(index=0;index<MAX;index++)
	{
		sum=sum+arr[index];
	}
	avg=sum/MAX;
	printf("\nSum of numbers : %d ",sum);
	printf("\nAverage of numbers : %d",avg);

	printf("\n");
	return EXIT_SUCCESS;
}

