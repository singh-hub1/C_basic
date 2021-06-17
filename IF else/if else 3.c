/*Write a C program to check whether a number is negative, positive or zero.*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    if(n>0)
        printf("it is positive");
    else if(n<0)
        printf("it is negative");
    else
        printf("it is zero");
    return 0;

}
