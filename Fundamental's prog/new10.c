//use of continue keyword//
#include<stdio.h>
int main()
{
    int count;
    for(count=1;count<=100;count++)
    {
        if(count%2==0)
            continue;
    }
    printf("even numbers are :%d\n",count);
    return 0;
}
