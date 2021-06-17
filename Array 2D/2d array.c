#include<stdio.h>
int main()
{
    int r,c;
    printf("enter how many salesperson you want\n");
    scanf("%d",&r);

    printf("enter how many item you want\n");
    scanf("%d",&c);

    printf("\n\n");

    printf("\n enter sale data\n");

    double salesdata[r][c];

    int i,j;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("salesperson no:%d  item no:%d\n",i+1,j+1);
            scanf("%lf",&salesdata[i][j]);
        }
    }
    printf("\ncontent of sales report each person one by one\n");

    printf("\n\n");

    double total=0.0;

    for(i=0;i<r;i++)
    {
        printf("salesperson no:%d",i+1);
        for(j=0;j<c;j++)
        {
            printf("item:%d: %lf\n",j+1,salesdata[i][j]);
            total+=salesdata[i][j];
        }
        printf("total:%lf\n",total);
    }
}
