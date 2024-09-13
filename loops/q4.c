/*4. Write a C program to determine whether a given positive integer is an Armstrong number. An Armstrong number (also known as a narcissistic number or pluperfect number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits. Your program should:

i. Prompt the user to enter a positive integer.
ii. Determine the number of digits in the number.
iii. Calculate the sum of each digit raised to the power of the total number of digits.
iv Compare the calculated sum to the original number to determine if it is an Armstrong number.
v. Print "Armstrong number" if the number is an Armstrong number, otherwise print "Not an Armstrong number"
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	int n,n1;
	int count=0;
	int result=0;

	printf("Enter a positive number");
	scanf("%d",&num);
	printf("num = % d",num);
	int num1=num;
	while(num1!=0)
	{	
		num1=num1/10;
		count++;
	}
	printf("No of digit in %d is %d ",num ,count);
	n=num;
	while(n!=0)
	{
		n1=n%10;
		result=result+n1*n1*n1;
		n=n/10;
	}
	printf("\nResult = %d\n",result);
	if(num==result)
		printf("\nIt is armstrong no");
	else
		printf("\nNot armstrong");
	return EXIT_SUCCESS;

}
