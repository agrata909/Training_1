/* OWNER : AGRATA SRIVASTAVA
	DATE: 6-9-2024
	SORT THE ELEMENTS IN ASCENDING ORDER
	*/

#include<stdio.h>
#include<stdlib.h>
#define max 5

int main()
{
	int temp;
	int arr[max];
	printf("Enter the elements in array: ");
	for(int i=0;i<max;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Elements in array before sorting:\n");
	for(int i=0;i<max;i++)
	{
		printf("%d\t",arr[i]);
	}

	//
	for(int i=0;i<max;i++)
	{
		for(int j=0;j<max-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}

		}
	}

	printf("\nArray after sorting :\n");
	for(int i=0;i<max;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}

