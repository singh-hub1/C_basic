/*Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
        printf("it is equilateral triangle\n");
    else if(a==b || b==c || c==a)
        printf("it is isoceles traiangle\n");
    else
        printf("it is  scalene triangle\n");
    return 0;

}
