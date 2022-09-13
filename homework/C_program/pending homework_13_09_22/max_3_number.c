// This program displays max of 3 numbers

#include<stdio.h>
#include<conio.h>

void main()
{
    float no_1,no_2,no_3;
    printf("Enter three numbers: ");
    scanf("%f%f%f",&no_1,&no_2,&no_3);

    if (no_1>no_2 && no_1>no_3)
        printf("%f is greatest among all three",no_1);
    else if (no_2>no_1 && no_2>no_3)
        printf("%f is greatest among three number",no_2);
    else if (no_1==no_2 && no_2==no_3)
        printf(" All three number are equal in value");
    else
        printf("%f is greatest ammong three number",no_3);
}