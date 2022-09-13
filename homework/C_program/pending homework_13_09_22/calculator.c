// This is a program to mimic calculator

#include<stdio.h>
#include<conio.h>

void main()
{
    float no_1,no_2;
    char OP;
    printf("Enter the operator: ");
    scanf("%c",&OP);
    printf("Enter the two numbers: ");
    scanf("%f%f",&no_1,&no_2);

    if (OP=='+')
        printf("sum = %f",no_1+no_2);
    
    else if (OP=='-')
    {   if(no_1-no_2)
            printf("diffrence = %f",no_1-no_2);
        else
            printf("diffrence = %f",no_2-no_1);
    }
    else if(OP=='*')
        printf("Product = %f",no_1*no_2);
    
    else if (OP=='/')
    {   if(no_1/no_2)
            printf("div = %f",no_1/no_2);
        else
            printf("div = %f",no_2/no_1);
    }
}