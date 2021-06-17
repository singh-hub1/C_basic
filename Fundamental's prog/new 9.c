//the secret of scanf function//
#include<stdio.h>
int main()
{
    int x,y,i;
    printf("enter two numbers\n");
    i=scanf("%d%d",&x,&y);  // scanf function scans how many digit scans//
    printf("x=%d,y=%d,i=%d",x,y,i);
    return 0;

}
