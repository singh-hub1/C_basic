/*Write a C program to check whether an alphabet is vowel or consonant using switch case.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character u want\n");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
          printf("it is vowel\n");
          break;

    default:printf("it is consent\n");
    }
    return 0;

}
