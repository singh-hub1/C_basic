#include<stdio.h>
int main()
{
    int no,sum=0;
    printf("enter the number\n");
    scanf("%d",&no);
    while(no>0)
    {

        sum=sum+no%10;
        no=no/10;
    }
    printf("%d",sum);
    return 0;
}
