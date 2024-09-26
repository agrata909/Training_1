//7. Write a program to find the second largest element in an array.

#include <stdio.h>
#include<limits.h>

#define max 10

int main() {
    
    int n;
    int arr[max];
    int first;
    int second;

    first=INT_MIN;
    second=first;
    
    printf("Enter size of array : ");
    scanf("%d",&n);
    
    printf("Enter elements of array :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first)
        {
            second=arr[i];
        }
    }
    printf("Second largest element is : %d ",second);
}


