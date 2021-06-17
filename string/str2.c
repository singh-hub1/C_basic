#include<stdio.h>
#include<string.h>

int main()
{
    char str[30];

    printf("enter a string\n");

    scanf("%[^\n]",str);

    int i;

     for(i=0;str[i]!='\0';i++);

        printf("length:%d\n",i);

     return 0;

}
