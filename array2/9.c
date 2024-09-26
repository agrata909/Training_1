//9. Write a program to find the transpose of a given 2D array (matrix).

#include <stdio.h>
#define row 3
#define col 3

int main() 
{
  
    int r,c;
    int arr[row][col];
    
    printf("Enter row of array : ");
    scanf("%d",&r);
    
    printf("Enter column of array : ");

    scanf("%d",&c);
    
    printf("Enter elements of array :\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transpose of array : \n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }  
}

