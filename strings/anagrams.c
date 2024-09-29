
// Write a program to check if two strings are anagrams of each other.
#include<stdio.h>
#include<string.h>
#define max 40

void sort(char *str)
{
    int len=strlen(str);
    
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1;j++)
        {
            if(str[j]>str[j+1])
            {
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
}

int main()
{
    char string1[max];
    char string2[max];
    int i,j,k;
    int len1,len2;
    
    printf("Enter string1 : ");
    fgets(string1,max,stdin);
    len1=strlen(string1);
    
    if(string1[len1-1]=='\n')
        string1[len1-1]='\0';
        
    printf("Enter string2 : ");
    fgets(string2,max,stdin);
    len2=strlen(string2);
    
    if(string2[len2-1]=='\n')
        string2[len2-1]='\0';
    
    //check length 
    if(len1!=len2)
         printf("The strings are not anagrams!");
    else
        {
            sort(string1);
            sort(string2);
            if(strcmp(string1,string2)==0)
                 printf("The strings are anagrams!");
            
            else
                printf("The strings are not anagrams!");
        }
    
    return 0;
}



