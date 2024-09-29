//4.Write a program to sort an array of strings in lexicographic (dictionary) order.

#include<stdio.h>
#include<string.h>
#define max_word 5
#define max_len 10

int main()
{
    char string[max_word][max_len];
    int len;
    char temp[max_len];
    
    printf("Enter 5 words :\n ");
    for(int i=0;i<5;i++)
    {
        fgets(string[i],sizeof(string[i]),stdin);
    }
  
   for(int i=0;i<5;i++)
   {
       for(int j=i+1;j<5;j++)
       {
           if(strcmp(string[i],string[j])>0)
           {
               strncpy(temp,string[i],max_len);
               strncpy(string[i],string[j],max_len);
               strncpy(string[j],temp,max_len);
           }
       }
   }
   
   printf("Words in lexicographic order are : \n");
    for(int i=0;i<max_word;i++)
    {
       printf("%s",string[i]);
    }
    
  
    return 0;
}




