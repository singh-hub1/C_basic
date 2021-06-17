#include<stdio.h>
int main()
{

    int n,i,sum=0;
    printf("enter the number\n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(i%3==0 && i%5!=0)
            sum=sum+i;
            i++;

    }
    printf("number is %d is %d\n",n,sum);
    return 0;

}
