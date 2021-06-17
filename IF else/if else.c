/*Write a C program to find maximum between two numbers.*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    if(a>b)
        printf("max:%d\n",a);
    else
        printf("max:%d\n",b);
    return 0;

}
