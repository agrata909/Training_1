//count occurrences 
#include<stdio.h>
#include<stdlib.h>
#define max 8
int main()
{
    int arr[max];
    int freq[max];
    int n;
    int count;

    printf("Enter size of array :");
    scanf("%d",&n);

    printf("Enter elements of array ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=-1)
        count=1;
        for(int j=i+1;j<n;j++)
        {
           if(arr[i]==arr[j])
           {
               count++;
               arr[j]=-1;
           }
           freq[i]=count;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=-1)
        printf("No of %d is %d\n ",arr[i],freq[i]);
    }
}
