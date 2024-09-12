/* OWNER :AGRATA SRIVASTAVA
	DATE:4-9-24*
	WRITE A PROGRAM TO READ AND PRINT ARRAY ELEMENTS(USING INDEX AND USING ADDRESS
*/
#include<stdio.h>
#include<stdlib.h>
#define max 5
int main()
{
	int arr[max];
	int index;
	int *ptr=arr;

	printf("Enter the elements:");
	for(index=0;index<max;index++)
	{
		scanf("%d",&arr[index]);
	}

	printf("\nPrinting elements of array using index ");
	for(index=0;index<max;index++)
	{
		printf("%d ",arr[index]);
	}

	printf("\nPrinting elements of array using address ");
	for(index=0;index<max;index++)
	{
		printf("%d ",*(ptr+index));
	}

	return EXIT_SUCCESS;

}

