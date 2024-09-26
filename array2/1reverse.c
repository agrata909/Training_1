#include<stdio.h>
#include<stdlib.h>
#define max 5
int main()
{
	int start=0;
	int end=max-1;
	int arr[max];

	printf("Enter elements in array: ");
	for(int i=0;i<max;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	while(start<=end)
	{
		int temp =arr[start];
		arr[start]=arr[end];
		arr[end]=temp;

		start++;
		end--;
	
	}
	printf("Reverse array :\n");
	for(int i=0;i<max;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return EXIT_SUCCESS;

}

