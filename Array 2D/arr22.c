#include<stdio.h>
int main()
{
    int r,c;
    printf("enter how mnay salesperson\n");
    scanf("%d",&r);
    printf("enter how mnay items\n");
    scanf("%d",&c);
    int x[r][c];
    printf("enter sales data\n");
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("salesperson:%d,items:%d\n",i+1,j+1);
            scanf("%d",&x[i][j]);
        }
    }
    printf("----------------------------------------");
    printf("content\n");
    double sum=0.0;
    for(i=0;i<r;i++)
    {
        printf("salesperson:%d",i+1);
        for(j=0;j<c;j++)
        {
            printf("item:%d\n",j+1);
            sum+=x[i][j];
        }
        printf("total:%lf",sum);
    }




    }
