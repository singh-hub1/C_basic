#include<stdio.h>
int main()
{
    char str[90];
    printf("enter your name\n");
    scanf("%[^\n]",str);
    printf("welcome %s\n",str);
    return 0;
}
