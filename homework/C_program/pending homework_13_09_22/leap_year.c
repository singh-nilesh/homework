// This program checks if a year is leap year or not

#include<stdio.h>
#include<conio.h>

void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if (year%4==0 && year%100!=0 || year%400==0)
        printf("the year %d is a leap year.",year);
    else
        printf("The year %d is nat a leap year.",year);
}