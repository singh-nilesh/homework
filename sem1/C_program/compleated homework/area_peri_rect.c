#include<stdio.h>
#include<conio.h>
void main()
{
    float l, b, area, per_m;
    printf("Enter lenght and bredth in meters: ");
    scanf("%f%f",&l,&b);
    area = l*b;
    per_m = 2*(l+b);
    printf("Area rectangle is %f\n",area);
    printf("Perimeter of rectangle is %f",per_m);
    getch();
}