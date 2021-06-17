/*Write a C program to check whether a number is divisible by 5 and 11 or not.*/
#include<stdio.h>
int main()
{

    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a%5==0 && a%11==0)
         printf("the given number is divisible by both the divisior\n");
    else if(a%5==0)
        printf("divisible by 5 only\n");
    else if(a%11==0)
        printf("divisible by 11 only\n");

       else
        printf("the given number is not divisible by both two divisior\n");

    return 0;

}
