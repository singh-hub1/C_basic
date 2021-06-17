/*Write a C program to input any character and check whether it is alphabet, digit or special character.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character\n");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z')|| (ch>='a' && ch<='z'))
        printf("it is alphabet\n");
    else if(ch>='0' && ch<='9')
        printf("it is digit\n");
    else
        printf("it is special character\n");
    return 0;

}
