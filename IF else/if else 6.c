/*Write a C program to check whether a year is leap year or not.*/
#include<stdio.h>
int main()
{

    int year;
    printf("enter any year u want\n");
    scanf("%d",&year);
   /* if((year%4==0 && year%100!=0) || (year%400==0))
        printf("this is leap year\n");
    else
        printf("this is not leap year\n");
    */
    ((year%4==0 && year%100!=0)||(year%400==0))?printf("leap year"):printf("not leap year");

    return 0;
}
