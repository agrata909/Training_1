/* Owner: Agrata Srivastava Date:4-9-24
write a program to find the max and min elements in an array of integers */


#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
	int maxno;
	int min;
	int arr[MAX];
	int index;
	printf("Enter the elements in array: ");
	for(index=0;index<MAX;index++)
	{
		scanf("%d",&arr[index]);
	}
	printf("\n");
	maxno=arr[0];
	min=arr[0];
	//to find min and max
	for(index=0;index<MAX;index++)
	{
		if(arr[index]>maxno)
			maxno=arr[index];

		if(arr[index]< min)
			min=arr[index];
	}
	
	printf("Maximum element is %d \n",maxno);
	printf("Minimum elements is %d\n ",min);
	
	printf("\n");
	return EXIT_SUCCESS;
}

