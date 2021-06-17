#include<stdio.h>
int main()
{

    int n;
    printf("enter number of rows\n");
    scanf("%d",&n);
    int i,j;
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
