#include<stdio.h>
int main()
{

    int age;
    char response;
    do
    {
    printf("enter your age\n");
    scanf("%d",&age);
    if(age>=13 && age <=17)
        printf("child\n");
    else
        printf("no child\n");

    printf("do you want to continue? (y/Y)\n");
    scanf("%c",&response);
    }  while(response=='y' || response=='Y');

    return 0;
}
