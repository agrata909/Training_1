/* OWNER : AGRATA SRIVASTAVA
	DATE : 4-9-2024
	SIMPLE CALCULATOR USING SWITCH
	*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	int a;
	int b;
	int result;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	printf("\nInput the operation to perform\n 1.Additional + \n 2.Subtraction - \n 3.Multiplication * \n 4.Division / \n");
	scanf(" ");
	scanf("%c",&c);

	switch(c)
	{
		case '+':
			result=a+b;
			printf("Sum = %d\n",result);
			break;

		case '-':
			result=a-b;
			printf("Difference = %d\n",result);
			break;

		case '*':
			result=a*b;
			printf("Product = %d\n",result);
			break;
		
		case '/':
			result=a/b;
			printf("Division = %d\n",result);
			break;
}
	return EXIT_SUCCESS;

}

