/*Write a C program to check whether a character is uppercase or lowercase alphabet.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character\n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
        printf("uppercase\n");
    else
        printf("lowercase\n");
    return 0;

}
