/* Owner: Agrata Srivastava Date:4-9-24
write a program to find the max and min elements in an array of integers */


#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
	int max_no=-99;
	int min=9999;
	int arr[MAX];
	int index;
	printf("Enter the elements in array: ");
	for(index=0;index<MAX;index++)
	{
		scanf("%d ",&arr[index]);
	}
	printf("\n");
	//to find min and max
	for(index=0;index<MAX;index++)
	{
		if(arr[index]>max_no)
			max_no=arr[index];

		if(arr[index]< min)
			min=arr[index];
	}
	
	printf("Maximum element is %d \n",max_no);
	printf("Minimum elements is %d\n ",min);
	
	printf("\n");
	return EXIT_SUCCESS;
}

