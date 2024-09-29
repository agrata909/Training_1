
// 1.Write a program to remove duplicate characters from a string

#include<stdio.h>
#include<string.h>
#define max 40

int main()
{
    char string[max];
    int i,j,k;
    int len;
    
    printf("Enter a string : ");
    fgets(string,max,stdin);
    len=strlen(string);
    
    if(string[len-1]=='\n')
        string[len-1]='\0';
    
    
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
           if(string[i]==string[j])
           {
               for(k=j;k<len;k++)
               {
                  string[k]=string[k+1]; 
               }
               len--;
               j--;
           }
        }
    }
    string[len]='\0';
    printf("The new string is %s ",string);
    
    return 0;
}
