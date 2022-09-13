// this is a program to determine the type of triangle

#include<stdio.h>
#include<conio.h>

void main()
{
    float s1,s2,s3;
    printf("Enter length of three sides: ");
    scanf("%f%f%f",&s1,&s2,&s3);
    if (s1+s2>s3 && s2+s3>s1 && s3+s1>s2)
    {
        if (s1==s2 && s2==s3)
            printf("The triangle is an equilateral triangle.");
        else if (s1==s2 || s2==s3 || s3==s1)
            printf("The triangle is an Isosceles triangle.");
        else if (s1!=s2 && s2!=s3 && s3!=s1)
            printf("The triangle is a scalene triangle"); 
    }
    else
        printf("The entered sides are not of a triangle");
}
