/*Write a C program to check whether a number is positive, negative or zero using switch case.*/
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    switch(a>0)
    {
        case 1:
              printf("number is positive\n");
                break;
        case 0:
        printf("number is negative\n");
        break;

          default:printf("number is zero\n");

    }
    return 0;
}
