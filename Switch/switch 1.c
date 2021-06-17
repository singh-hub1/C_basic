/*Write a C program to print day of week name using switch case.*/
#include<stdio.h>
int main()
{
    int week;
    printf("enter number ur week");
    scanf("%d",&week);

       switch(week)//7
       {
            case 1: printf("monday\n");
             break;
            case 2: printf("tuesday\n");
             break;
            case 3: printf("wednesday\n");
             break;
            case 4: printf("thursday\n");
             break;
            case 5: printf("friday\n");
             break;
            case 6: printf("saturday\n");
             break;
            case 7: printf("sunday\n");
             break;
        default:printf("invalid week u enter\n");
       }
       return 0;
}
