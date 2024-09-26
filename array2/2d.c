#include<stdio.h>
#include<stdlib.h>
#define row 2
#define col 2 

int main()
{
	int arr[row][col];
	
	printf("Enter the elements in array: ");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");

	}
	printf("The elements in the array are:\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
