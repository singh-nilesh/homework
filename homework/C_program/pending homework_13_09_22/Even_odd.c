//this is a program to see if a number is od or even

#include<stdio.h>
#include<conio.h>

void main()
{
    int no;
    printf("Enter a number: ");
    scanf("%d",&no);
    if (no%2==0)
        printf(" The number %d is an even number.",no);
    else
        printf("The number %d is an odd number.",no);
    getch();
}