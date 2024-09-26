/*  Owner:AGRATA 
	Date:5-9-2024
	search element */
#include<stdio.h>
#include<stdlib.h>
#define max 5
int main()
{
	int key;
	int flag=0;
	int i;
	int index=0;
	int arr[max];

	printf("Enter elements in array: ");
	for(i=0;i<max;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter the element you want to search : ");
	scanf("%d",&key);

	for(i=0;i<max;i++)
	{
		if(key==arr[i])
		{
			flag=1;
			index=i;
			break;
		}
	}
	if(flag==1)
		printf("Element found at %d",index);
	else
		printf("Element does not exist");

	printf("\n");
	return EXIT_SUCCESS;

}

