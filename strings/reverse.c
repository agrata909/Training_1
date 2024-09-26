//reverse a string

#include<stdio.h>
#include<string.h>
#define max 10
int main()
{
    char string[max];
    char sub[max];
    int start=0;
    int end;
    
    printf("Enter the string : ");
    fgets(string,max-1,stdin);
    int len=strlen(string);
    if(string[len-1]=='\n')
        string[len-1]='\0';
    
    end=strlen(string)-1;
        while(start<end)
        {
            char temp=string[start];
            string[start]=string[end];
            string[end]=temp;
            
            start++;
            end--;
        }
    
    printf("REVERSE: ");
    printf("%s",string);
   
}
