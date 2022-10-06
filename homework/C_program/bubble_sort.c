#include<stdio.h>
#include<conio.h>
void main()
{
    int marks[5],i,j,swap;
    for(i=0;i<5;i++)
    {
        printf("Enter marks: ");
        scanf("%d",&marks[i]);
    }
    for(j=0;j<5;j++)
    {
        for(i=0;i<4;i++)
        {
            if(marks[i]>marks[i+1])
            {
                swap=marks[i];
                marks[i]=marks[i+1];
                marks[i+1]=swap;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",marks[i]);
    }
    getch();
}