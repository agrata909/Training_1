#include<stdio.h>
#include<string.h>
#define max 40
int main()

{
	char string[max];
	char *token;
	
	memset(string,0,max);

	printf("Enter a string\n");
	fgets(string,max,stdin);
	int len=strlen(string);

	if(string[len-1]=='\n')
		string[len-1]='\0';

	token=strtok(string,"|");

	while(token!=NULL)
	{	
		puts(token);
		token=strtok(NULL,"|");
	}
//	printf("The input string is : \n");
//	fputs(string,stdout);
//	printf("\n");
	
	return 0;
}
