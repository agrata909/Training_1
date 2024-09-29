// 1. Write a program to define a structure called Student with members: name, age, and grade. Create an instance of this structure and take input from the user for each member, then print the values.

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
  int age;
  char name[10];
  char grade;
}Student;

int main()
{
    Student s1;
    printf("Enter details of student");
    printf("\nName :");
    scanf("%s",s1.name);
    printf("Age :");
    scanf("%d",&s1.age);
    printf("Grade :");
    scanf(" %c",&s1.grade);
    
    printf("\nName : %s",s1.name);
    printf("\nAge : %d",s1.age);
    printf("\nGrade : %c",s1.grade);
    
    return 0;
}

