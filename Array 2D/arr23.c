#include<stdio.h>
int main()
{
    int x[3][3];
    int i,j;
    printf("\ninput array 2d elements\n");
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            printf("\nenter array elements\n");
            scanf("%d",&x[i][j]);
        }
    }

printf("content of an array\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d\t",x[i][j]);
    }
    printf("\n");
}
return 0;
}
