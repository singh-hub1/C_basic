#include<stdio.h>
int main()
{
    int x[5];
    int *ptr=&x[0];
    printf("enter five number of ur choice\n");
    int i;
    int sum=0;
    for(i=0;i<5;i++)
    {
        printf("ptr[%d]=",i);
        scanf("%d",(x+i));              //array=x[i],  pointer=(x+i)
        sum=sum+x[i];
    }
    
    printf("addition is %d\n",sum);
    return 0;

}