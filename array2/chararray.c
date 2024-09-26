#include<stdio.h>
#include<stdlib.h>
#define max 5
int main()
{
	char a[max];
	char b[6] ="agrata";

	printf("Enter a string");
	scanf("%s",a);

	printf("%s is the first string",a);
	printf("\n");
	printf("%s is the second string\t",b);
	 return EXIT_SUCCESS;
	 }
