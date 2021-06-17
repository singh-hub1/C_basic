#include<stdio.h>
int main()
{
    int x[90],i;
    for(i=0;i<90;i++)
    {
        x[i]=i+1;

    }
    printf("content of an array\n");
    for(i=0;i<90;i++)
    {
        printf("%6d",x[i]);

    }
    return 0;

}
