#include<stdio.h>
#include<stdlib.h>
#define no 60
int main()
{
	int hr;
	int min;
	int total_mins;

	printf("\nEnter time in hours and minutes");
	scanf("%d %d",&hr,&min);

	total_mins= hr * no + min;
	printf("Time in minutes is %d\n",total_mins);

	return EXIT_SUCCESS;

}

