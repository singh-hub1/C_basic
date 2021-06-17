/*Write a C program to find maximum between two numbers using switch case.*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    switch(a>b)
    {

        case 0:printf("%d",b);
        break;
        case 1:printf("%d",a);
        break;
        default:printf("both are same numbers\n");

    }
    return 0;

}
