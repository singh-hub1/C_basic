#include<stdio.h>
int main()
{

    int n;
    printf("enter how many rows\n");
    scanf("%d",&n);
    int i,j;
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(j>=6-i)
            printf("*");
            else
                printf(" ");

        }
        printf("\n");

    }
}
