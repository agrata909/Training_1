// 2. Create a structure Book with members: title, author, and price. Create an array of 5 books and take input from the user for each book's details. Finally, print the details of all books.

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
  char author[10];
  char title[10];
  int price;
}Book;

int main()
{
    Book b[5];
    printf("Enter details of Books");
    for(int i=0;i<5;i++)
    {
    printf("\nTitle :");
    scanf("%s",b[i].title);
    printf("Price :");
    scanf("%d",&b[i].price);
    printf("Author :");
    scanf(" %s",b[i].author);
   
    }
    printf("\nDetails of the books are :");
    for(int i=0;i<5;i++)
    {
    printf("\nName : %s",b[i].title);
    printf("\nPrice : %d",b[i].price);
    printf("\nAuthor : %s",b[i].author);
    printf("\n");
    }
    return 0;
}
