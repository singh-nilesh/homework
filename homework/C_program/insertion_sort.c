#include <stdio.h>
#include <conio.h>
void main()
{
    int marks[5],i,j,k,min,sp,store;
	for(i=0;i<5;i++)
	{
		printf("Enter the number: ");
		scanf("%d",&marks[i]);
	}
	for(i=0;i<4;i++)
	{
		min=i;
		for(j=i+1;j<5;j++)
		{
			if(marks[min]>marks[j])
			{
				min=j;
			}
		}
	store=marks[min];
	for(k=min-1;k>=0;k--)
	{
        if(marks[k]<store)
        {
			sp=k;
			break;
		}
		marks[k+1]=marks[k];
	}
	marks[k+1]=store;
    }

	for(i=0;i<5;i++)
	{
		printf("%d ",marks[i]);
	}
   getch();
}
