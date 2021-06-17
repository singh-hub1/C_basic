/*Write a C program to check whether a number is even or odd using switch case.*/
#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    switch(a%2==0 && a>0)
    {
        case 0:printf("given number is odd\n");
           break;
           case 1:printf("given number is even\n");
             break;

    }
    return 0;

}
