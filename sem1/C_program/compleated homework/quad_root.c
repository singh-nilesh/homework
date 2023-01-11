#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c,r1,r2,d;
    printf("Enter the values of a,b & c: ");
    scanf("%d%d%d",&a,&b,&c);
    d = (b*b-4*a*c);
    r1 = (-1*b+sqrt(d))/(2*a);
    r2 = (-1*b-sqrt(d))/(2*a);
    printf("two root of equation are %d and %d",r1,r2);
    getch();
}