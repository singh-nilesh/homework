#include<stdio.h>
#include<conio.h>

int count;
void enqueue();
void dequeue();
void display();
void front_obj();
void rear_obj();
void length_queue();

// Driver code
void main()
{
    int size=5;// Size from User
    printf("\nEntere size of Queue: ");
    scanf("%d",&size);

    int queue[size];
    int front=-1,back=-1;
    count=0;

    int choice;
    printf("\n Operations performed on Queue are:\n");
    printf(" 1.Enqueue(Add)\n 2.Dequeue(Delete)\n 3.display(status)");
    printf("\n 4.front\n 5.rear\n 6.size(no of obj.)\n 7.end\n");
    while (0==0)
    {
        printf("\nEnter choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:enqueue(queue,&front,&back,size);
            break;
        case 2:dequeue(queue,&front,&back,size);
            break;
        case 3:display(&back,queue);
            break;
        case 4:front_obj(queue,&front);
            break;
        case 5:rear_obj(queue,&back);
            break;
        case 6:length_queue(size);
            break;
        case 7:goto end;
            break;
        default:printf("invalid case\n");
            break;
        }
    }
    end:
        printf("Program ended!!!");
    getch();
}


// Enqueue ( Add object to queue )
void enqueue(int *queue,int *front,int *back,int size)
{
    if(*back<(size-1))
    {
        int data;
        printf("Enter data to EnQueue: ");
        scanf("%d",&data);
        if(*front==(-1))
            *front=0;
        *back=*back+1;
        queue[*back]=data;
        count++;
    }
    else
        printf("The Queue is full.\n");
}

// Dequeue ( Remove objects )
void dequeue(int *queue,int *front,int* back,int size)
{
    if(*front==(-1))
        display(back,queue);
    else
    {
        printf("deleted %d\n",queue[*front]);
        *front=*front+1;
        count--;
        if(*front>*back)
            *front=*back=(-1);
    }
}

// Display (print status of queue)
void display(int *back,int *queue)
{
    int i;
    if(*back==(-1))
        printf("The Queue is empty.\n");
    else
    {
        printf("Elements in Queue are:\n");
        for(i=0;i<count;i++)
            printf("%d,  ",queue[i]);
        printf("\n");
    }
}

// size
void length_queue(int size)
{
    printf("%d element in queue\n",count);
    printf("%d more to go.\n",(size-count));
}

// front
void front_obj(int *queue,int *front)
{
    if(*front>(-1))
        printf("front object= %d\n",queue[*front]);
    else
        printf("Queue is empty!\n");
}

// rear
void rear_obj(int *queue, int *back)
{
    if(*back>(-1))
        printf("rear object= %d\n",queue[*back]);
    else
        printf("Queue is empty!\n");
}