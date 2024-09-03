/* OWNER : AGRATA DATE : 3SEPT '24 

	MAX OF TWO NUMBERS
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	int b;
	int result;

	printf("Enter two numbers");
	scanf("%d%d",&a,&b);

	result= a>b? a:b;

	printf("The maximum number among %d and %d is %d\n\n ",a,b,result);
	
	return EXIT_SUCCESS;
}
