#include<stdio.h>
int main()
{

    int n,i,sum;
    printf("enter how many numbers\n");
    scanf("%d",&n);
    sum=0;
    i=1;
    while(i<=n)
        sum+=i++;
    printf("sum of %d is %d\n",n,sum);
    return 0;

}
