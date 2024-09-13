// automorphic number

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int result,mod;
	int number;
	int square;
	int digit_o;
	int digit_n;
	int count=0;

	printf("Enter a number");
	scanf("%d",&number);

	square=number*number;
	printf("The square of the number is %d ",square);

	int n=number;
	while(n!=0)
	{
		n=n/10;
		count++;

	}
	printf("\nThe number of digits in %d is %d ",number,count);

	mod=pow(10,count);
	result=square%mod;
	if(result==number)
		printf("\nAutomorphic number");
	else
		printf("\nNot an Automorphic number\n");

	return 0;
}
