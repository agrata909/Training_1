/* OWNER : AGRATA SRIVASTAVA
   
 PRINT CLOSEST SQUARE ROOT NO*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int number;
	int root;
	int below;
	int above;

	printf("Enter a number");
	scanf("%d",&number);

	root=sqrt(number);
	printf("The square root  is %d",root);
	
	below=root*root;
	above=(root+1)*(root+1);

	printf("\nThe square of the number (below) is %d",below);
	printf("\nThe square of the number (above) is %d",above);

	if(abs(root-below)<abs(root-above))
	{	
		printf("\nClosest integer is %d ",above);	
	}
	else
	{
		printf("\nClosest integer is %d\n ",below);
	}

	return EXIT_SUCCESS;
}
