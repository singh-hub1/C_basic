/*Write a C program to check whether a number is even or odd.*/
#include<stdio.h>
int main()
{
    int x;
    printf("enter any number\n");
    scanf("%d",&x);
    x%2==0?printf("even\n"):printf("odd\n");
    return 0;

}
