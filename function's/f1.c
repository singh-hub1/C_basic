#include<stdio.h>
char touppercase(char);
char tolowercase(char);
int islowercase(char);
int isuppercase(char);

int main()
{
    char k;
    k='A';
    k=tolowercase(k);
    printf("lowercase:%c\n",k);

    k='q';
    k=touppercase(k);
    printf("upper case:%c\n",k);
     return 0;
}
char tolowercase(char ch)
{
    if(isuppercase(ch))

        return ch+32;

    else
        return ch;
}
int isuppercase(char ch)
{
    if(ch>='A'&& ch<='Z')
        return 1;
    else
        return 0;
}
char touppercase(char ch)
{
    if(islowercase(ch))

        return ch-32;
    else
        return ch;
}
int islowercase(char ch)
{
    if(ch>='a'&& ch<='z')
        return 1;
    else
        return 0;
}
