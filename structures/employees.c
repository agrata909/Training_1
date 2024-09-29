// Create a structure Employee with members id, name, and salary.
//Write a function that takes an employee structure as an argument and prints its member.

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int id;
	char name[10];
	int salary;

}Employee;

void print_details(Employee emp)
{	
	printf("The details of the employee are:");
	printf("\nId : %d",emp.id);
	printf("\nName : %s",emp.name);
	printf("\nSalary : %d ",emp.salary);
}

int main()
{
	Employee e;
	printf("\nEnter details of employee :");
	printf("\nEnter id : ");
	scanf("%d",&e.id);
	printf("Enter Name :");
	scanf("%s",e.name);
	printf("Enter Salary :\n ");
	scanf("%d",&e.salary);

	print_details(e);
	printf("\n");
	return EXIT_SUCCESS;
}
