/*Write a C program to create Simple Calculator using switch case.*/
#include<stdio.h>
int main()
{
    double a,b,res=0;
    char ch;
    printf("welcome to calculator\n");
    printf("enter two numbers\n");
    scanf("%lf %lf",&a,&b);

     printf("enter your choice\n");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+':res=a+b;
        break;
        case '-':res=a-b;
        break;
        case '*':res=a*b;
        break;
        case '/':res=a/b;
        break;
        default: printf("invalid choice\n");
    }
    printf("%lf %c %lf:%lf\n",a,ch,b,res);
    return 0;
}
