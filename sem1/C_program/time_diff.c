#include<stdio.h>
#include<conio.h>

struct time
{
    int houre;
    int min;
    int sec;
}time_1,time_2;

int total_sec(struct time t)
{
    int total;
    total= (t.sec)+(t.min*60)+(t.houre*3600);
    return total;
}

void time_diff(int num)
{
    int h,m,s,no;
    no=abs(num);
    h=abs(no/3600);
    m=abs((no-(h*3600))/60);
    s=abs(no-(h*3600)-(m*60));
    printf("Diffrence is  %d:%d:%d",h,m,s);
}

void main()
{
    int t_1,t_2;
    printf("Use 24 hour clock\n");

    printf("Enter time_1 (hh mm ss): ");
    scanf("%d%d%d",&time_1.houre,&time_1.min,&time_1.sec);
    t_1=total_sec(time_1);

    printf("Enter time_2 (hh mm ss): ");
    scanf("%d%d%d",&time_2.houre,&time_2.min,&time_2.sec);
    t_2= total_sec(time_2);

    time_diff(t_1-t_2);
}

