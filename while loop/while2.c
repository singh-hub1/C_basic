#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the number\n");
    scanf("%d",&n);
    while(n>0)
    {
        sum+=n;
        printf("enter your number\n");
        scanf("%d",&n);

}
printf("sum of %d numbers is %d\n",n,sum);
return 0;
}
