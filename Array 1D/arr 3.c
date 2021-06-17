#include<stdio.h>
int main()
{
    int n;
    printf("enter how many array numbers\n");
    scanf("%d",&n);
    int x[n];
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter array elements\n");
        scanf("%d",&x[i]);
    }
    printf("array elements\n");
    for(i=0;i<n;i++)
    {
        printf("x[%d]=%d\n",i,x[i]);
    }
    return 0;
}
