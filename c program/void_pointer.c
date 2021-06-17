#include<stdio.h>
int main()
{
    void *vp;
    int x=100;
    vp=&x;
    printf("x=%d\n",*((int*)vp));
}