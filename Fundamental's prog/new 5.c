//flushing problem with character input//
#include<stdio.h>
int main()
{
    char ch;
    int i,j;
    printf("enter an integer\n");
    scanf("%d",&i);
    printf("enter a character\n");
    scanf(" %c",&ch);               //here when u write character like this then u have to give some space in between format specifier in there//
    printf("enter an integer\n");
    scanf("%d",&j);
    return 0;


}
