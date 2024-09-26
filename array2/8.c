//8. Write a program to check if an array is a palindrome.

#include <stdio.h>
#define max 10

int main() 
{
    int flag=0;
    int n;
    int arr[max];
    
    printf("Enter size of array : ");
    scanf("%d",&n);
    
    printf("Enter elements of array :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n/2;i++)
    {
       if(arr[i]!=arr[n-1-i])
        flag=1;
    }
    if(flag==0)
        printf("The array is a pallindrome");
    else
        printf("Not a pallindrome!");
}
