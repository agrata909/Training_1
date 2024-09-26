//6.Write a program to remove duplicate elements from an array.

#include <stdio.h>
#include<stdlib.h>
#define max 10
int main() {
    int n;
    int arr[max];
    int i,j,k;
    
    printf("Enter the size of array :");
    scanf("%d",&n);
    
    printf("Enter the elements of array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
  
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                for(k=j;k<n-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    
    printf("Elements of array ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

