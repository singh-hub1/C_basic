/*Write a C program to input angles of a triangle and check whether triangle is valid or not.*/
#include<stdio.h>
int main()
{
    int angle_1,angle_2,angle_3,sum=0;
    printf("enter first angle of triangle\n");
    scanf("%d",&angle_1);
    printf("enter second angle of triangle\n");
    scanf("%d",&angle_2);
    printf("enter third angle of triangle\n");
    scanf("%d",&angle_3);
    sum=angle_1+angle_2+angle_3;
    if(sum==180 && angle_1>0 && angle_2>0 && angle_3>0)
        printf("This is valid triangle\n");
    else
        printf("this is not valid triangle\n");
    return 0;

}
