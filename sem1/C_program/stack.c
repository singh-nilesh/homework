#include<stdio.h>
#include<conio.h>
#define size 3

int stack[size];
int top=-1;

// isfull & isempty combined
void display()
{
    if(top==(size-1))
    { printf("The stack is full\n"); }
    else if(top==((-1)))
    { printf("The stack is empty\n"); }
    else
    { printf("stack is't full yet!! \n");
        printf("use: pop to remove,\n\tpush to update\n"); }
}

// function for push
void push()
{
    int data=0;
    if(top<(size-1))
    {
        printf("Enter data to push: ");
        scanf("%d",&data);
        top=top+1;
        stack[top]=data;
    }
    else
    { display();}
}

// function for pop
void pop()
{
    if(top>(-1))
    {
        printf("poped element: %d \n",stack[top]);
        top=top-1;
    }
    else
    { display();}
}

// function for peek
void peek()
{
    if(top<size && top>(-1))
    {
        printf("top element: %d \n",stack[top]);
    }
    else
    { display();}
}

// Driver code
void main()
{
    int choice;
    printf("\n Operations performed on stack are:\n");
    printf(" 1.push\n 2.pop\n 3.display(status)\n 4.peek\n 5.end\n");
    while (2==2)
    {
        printf("\nEnter choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:push();
            break;
        case 2:pop();
            break;
        case 3:display();
            break;
        case 4:peek();
            break;
        case 5:goto end;
            break;
        default:printf("invalid case\n");
            break;
        }
    }
    end:
        printf("Program ended!");
    getch();
}
