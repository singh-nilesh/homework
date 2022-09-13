#include<stdio.h>
#include<conio.h>
void main()
{
    float r,area,peri_m,pi=3.14;
    printf("Enter the radius of the circle in meter: ");
    scanf("%f",&r);
    area = pi*r*r;
    peri_m = 2*pi*r;
    printf("Area of circle is %f m^2\n",area);
    printf("Perimeter of circle is %f m",peri_m);
    getch();
}