/*Write a C program to print multiplication table of any number.*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter a multiplication table u want\n");
    scanf("%d",&n);
    int i=1;
    while(i<=10)
    {
        printf("%d * %d=%d\n",n,i,n*i);
        i++;
    }
    return 0;
}
