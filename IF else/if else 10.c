/*Write a C program to input week number and print week day.*/
#include<stdio.h>
int main()
{
    int week;
    printf("enter the week number\n");
    scanf("%d",&week);

    if(week==1)
    {
        printf("MONDAY");
    }
    else if(week==2)
    {
        printf("TUESDAY");
    }
    else if(week==3)
    {
        printf("WEDNESDAY");
    }
    else if(week==4)
        {
            printf("THURSDAY");
        }
    else if(week==5)
        {
            printf("FRIDAY");
        }
    else if(week==6)
        {
            printf("SATURDAY");
        }
    else if(week==7)
        {
            printf("SUNDAY");
        }
    else
        printf("invalid number\n");
    return 0;
}
