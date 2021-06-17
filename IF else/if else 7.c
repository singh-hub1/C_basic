/*Write a C program to check whether a character is alphabet or not.*/
#include<stdio.h>
int main()
{
    char c;
    printf("enter a character\n");
    scanf("%c",&c);
    if(c>=65 && c<=122)
        printf("it is character\n");
    else
        printf("it is not character\n");
    return 0;

}
