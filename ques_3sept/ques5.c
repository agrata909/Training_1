/* Owner : AGRATA SRIVASTAVA  DATE:3-9-24

MAX OF THREE NUMBERS
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	int b;
	int c;
	int result;

	printf("Enter three numbers");
	scanf("%d%d%d",&a,&b,&c);

	result = a > b ? ((a>c)?a:c):(b>c ? b : c);

	printf("The maximum number is %d\n\n ",result);
	
	return EXIT_SUCCESS;
}
