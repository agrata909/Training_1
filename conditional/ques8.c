
/* OWNER:AGRATA SRIVASTAVA  DATE:3-9-2024
QUES 8 : Read a character and check vowel or consonent 
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;

	printf("\nEnter a character : ");
	scanf("%c",&c);

	switch(c)
	{
		case 'a' :
			printf("Vowel\n");
			break;

		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
			printf("Vowel\n");
			break;
	
		case 'b' : 
		case 'd' : 
		case 'f' :
		case 'g' :
		case 'h' :
		case 'j' :
		case 'k' : 
		case 'l' : 
		case 'm' : 
		case 'n' : 
		case 'p' : 
		case 'q' : 
		case 'r' : 
		case 's' : 
		case 't' : 
		case 'v' :
		case 'w' :
		case 'x' :
		case 'y' :
		case 'z' :
			printf("Consonent\n");
			break;
	default:
		printf("Wrong input!!\n");
}
	return EXIT_SUCCESS;	}
