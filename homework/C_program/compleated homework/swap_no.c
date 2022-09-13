#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,var ;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    var = a;
    a = b;
    b = var;
    printf("Value of a if %d and value of b is %d.",a,b);
    getch();
}