/*Write a C program to find maximum between three numbers.*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    printf("enter third number\n");
    scanf("%d",&c);
    if(a>b && a<c)

        printf("max:%d",a);
    else if(b>c)
        printf("max:%d",b);
        else
        printf("max:%d",c);

    return 0;

}
