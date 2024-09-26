/* owner agrata srivatava  date : 5-9-2024*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 10

int main()
{
	char a[max];
	char ch[max];
	printf("Enter a string");
	scanf("%[^\n]s",a);

	printf("Enter a new string");
	fgets(ch,max,stdin);

	len=strlen(ch);
	if(ch[len-1]=='\n')
		ch[len-1]='\0';
	printf("The input string is %s",ch);

	printf("%s is the second string\t",b);
	 return EXIT_SUCCESS;
	 }
