#include<stdio.h>
int main()
{
    int a,b,c;
    double d,avg;
    printf("enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+c)/3;
    printf("sum:%lf\n",d);
    avg=d/3;
    printf("average:%lf\n",avg);

    return 0;

}
