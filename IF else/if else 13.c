/*Write a C program to input all sides of a triangle and check whether triangle is valid or not.*/
#include<stdio.h>
int main()
{

    int a,b,c,valid=0;
    printf("enter three sides\n");
    scanf("%d%d%d",&a,&b,&c);

    if((a+b)>c)
    {
        if((a+c)>b)
        {
            if((b+c)>a)
            {
                valid=1;
            }
        }
    }
    if(valid==1)
    {
        printf("triangle is valid\n");
    }
    else
        printf("triangle is not valid\n");

    return 0;

}
