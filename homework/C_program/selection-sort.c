#include<stdio.h>
#include<conio.h>
void main()
{
    int marks[5],i,j,min,swap,sp;
    for(i=0;i<5;i++)
    {
        printf("Enter marks: ");
        scanf("%d",&marks[i]);
    }
    for (i=0; i<4; i++)
    {
        min=marks[i];
        sp=i;
        for(j=(i+1);j<5;j++)
        {
            if(min>marks[j])
            {
                min=marks[j];
                sp=j;
            }
        }
            swap=marks[sp];
            marks[sp]=marks[i];
            marks[i]=swap;
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",marks[i]);
    }
    getch();
}