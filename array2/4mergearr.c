/* OWNER : AGRATA SRIVASTAVA
	DATE: 6-9-2024
	Merge two arrays into a single array
	*/

#include<stdio.h>
#include<stdlib.h>
#define max 3

int main()
{
	int i,j;
	int arr1[max];
	int arr2[max];
	int res[200];

	//printf("Enter the size of array1 ");
	
	printf("Enter the elements in array 1: ");
	for(int i=0;i<max;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	//printf("Enter the size of array2");
	//scanf("%d",&n);
	printf("Enter the elements in array2: ");
	for(j=0;j<max;j++)
	{
		scanf("%d",&arr2[j]);
	}


	/* printf("\nElements in array1: ");
	for(i=0;i<max;i++)

	{
		printf("%d\t",arr1[i]);

	}

	printf("\nElements in array2: ");
	for(j=0;j<max;j++)
	{
		printf("%d\t",arr2[j]);
	}
	*/
	
	
	//copying elements to res array - array 1
	for(i=0;i<max;i++)
	{
		res[i]=arr1[i];
	}
	
	for(j=0;j<2*max;j++)
	{
		res[j+max]=arr2[j];
	}

	printf("\n The elements in resultant array are:\n");
	for(i=0;i<2*max;i++)
	{
		printf("%d ",res[i]);
	}
	printf("\n");
		return 0;
	}
