//1. WAP to get the position of a substring in a string


#include<stdio.h>
#include<string.h>
#define max 10
int main()
{
    char string[max];
    char sub[max];
    
    printf("Enter the string : ");
    fgets(string,max-1,stdin);
    int len=strlen(string);
    if(string[len-1]=='\n')
        string[len-1]='\0';
        
    printf("Enter the substring : ");
    fgets(sub,max-1,stdin);
    int len2=strlen(sub);
    if(sub[len2-1]=='\n')
        sub[len2-1]='\0';
    
    char *pos=strstr(string,sub);
    
    if(pos!=NULL)
    {
        int index=pos-string;
        printf("The substring %s is found at %d",sub,index);
    }
    else
        printf("The substring is not found!");
}

