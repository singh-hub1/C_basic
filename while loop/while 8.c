/*Write a C program to print all natural numbers in reverse (from n to 1). - using while loop*/

#include<stdio.h>
int main()
{
    int n,count;
    printf("enter the natural number u want\n");
    scanf("%d",&n);
    count=n;
    while(count>=1)
{

           printf("natural numbers is:%d\n",count);
           count--;
    }
    return 0;

}
