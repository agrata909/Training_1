/* OWNER agrata date:4-9-2024
Write a program that asks user the number of days and then converts that value to weeks and days*/

#include<stdio.h>
#include<stdlib.h>
#define week 7
int main()
{
	int days;
	int result;
	int r;
	printf("Enter number of days ");
	scanf("%d",&days);
	r=(int)days%week;
	result=(int)days/week;
	printf("%d days are %d weeks and %d days",days,result,r);

}
