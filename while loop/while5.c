#include<stdio.h>
int main()
{
    int n,ld=0,fd=0,sum=0;
    printf("enter the number\n");
    scanf("%d",&n);
    ld=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    fd=n;
    sum=ld+fd;
    printf("%d",sum);
    return 0;

}
