/* OWNER AGRATA DATE:4-9-24*/
//write a program to initialize an array with first 10 natural numbers and print the elements*/

#include<stdio.h>
#include<stdlib.h>
#define max 10
int main()
{
	int arr1[10]={1,2,3,4,5,6,7,8,9,10};
	int index;
	
	printf("Elements in the array (natural numbers) are: ");
	for(index=0;index<max;index++)
	{
		printf("%d ",arr1[index]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}

