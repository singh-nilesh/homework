// this is a program to identify is a enter data is a letter, number, or special char.

#include<stdio.h>
#include<conio.h>

void main()
{
    char box;
    printf("Enter any-thingh you wish: ");
    scanf("%c",&box);
    if ((box>='a' && box<='z') || (box>='A' && box<='Z'))
        printf(" %c is an alphabet",box);
    else if (box>='0' && box<='9')
        printf(" %c is a number",box);
    else
        printf(" %c is a special char",box);
    getch();
}