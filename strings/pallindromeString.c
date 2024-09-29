
//3.Write a program to check if a given string is a palindrome or not.
#include<stdio.h>
#include<string.h>
#define max 40

int main()
{
    char string1[max],pall[max];
    int len1;
    int start=0;
    int end;
    char temp;
    
    printf("Enter string : ");
    fgets(string1,max-1,stdin);
    len1=strlen(string1);
    
    if(string1[len1-1]=='\n')
    {
        string1[len1-1]='\0';
        len1--;
    }
     
    
  strncpy(pall,string1,len1);
  pall[len1] = '\0'; 
    end = len1 - 1;
    
    while(start<end)
    {
        temp=pall[start];
        pall[start]=pall[end];
        pall[end]=temp;
        
        start++;
        end--;
        
    }
  
    printf("the string is %s\n ",string1);
    printf("the reverse is %s ",pall);
    if(string1==pall)
    return 0;
}

