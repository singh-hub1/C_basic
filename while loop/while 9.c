/*Write a C program to print all alphabets from a to z. - using while loop*/
#include<stdio.h>
int main()
{
    int i=97;
    printf("small alphabet are as folows\n");
    while(i>=97 && i<=122)
    {
        printf("%4c",i);
        i++;
    }
    return 0;
}
