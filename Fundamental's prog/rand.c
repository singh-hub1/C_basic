//random number generate//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int k,i;
    srand(time(NULL));
    for(i=1;i<=10;i++)
    {
        k=rand()%100; //it print only two digit random number//

    printf("%d\n",k);
    }
    return 0;

}
