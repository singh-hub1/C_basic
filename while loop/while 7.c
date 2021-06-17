/*Write a C program to print all natural numbers from 1 to n. - using while loop*/
#include<stdio.h>
int main()
{
    int n,count=0,sum=0;
    printf("enter the natural number u want\n");
    scanf("%d",&n);
    while(count<n)
    {

        count++;

    printf("natural numbers is:%d\n",count);
    sum+=count;

    }
    printf("sum:%d\n",sum);
        return 0;

}
