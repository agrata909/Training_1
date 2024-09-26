#include<stdio.h>
#include<string.h>
#define max 50
int main()
{
	char s1[max];
	char s2[max];

	printf("Enter string 1 : ");
	fgets(s1,max-1,stdin);


	printf("Enter string 2 : ");
	fgets(s2,max-1,stdin);

	int len1=strlen(s1);
	int len2=strlen(s2);

	if(len1==len2)
	{
		 
	}
	return 0;
}

