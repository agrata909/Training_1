
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
	int arr1[MAX];
	int index;
	printf("Enter the elements in array: ");
	for(index=0;index<MAX;index++)
	{
		scanf("%d ",&arr1[index]);
	}
	
	printf("Elements in the array are: ");
	for(index=0;index<MAX;index++)
	{
		printf("%d ",arr1[index]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}

