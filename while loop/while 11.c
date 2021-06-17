/*Write a C program to print all odd numbers between 1 to 100. - using while loop*/
#include<stdio.h>
int main()
{
    int i=1,sum=0,n;
    printf("enter a number u want\n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
            {printf("number is odd:%d\n",i);
            sum=sum+i;}
        i++;
    }
    printf("sum:%d",sum);
    return 0;
}
