#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int n;
    printf("enter how may number u want\n");
    scanf("%d",&n);//5
    p=(int*) calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("allocation failed\n");
    }
    else
    {
        int i;
        for(i=0;i<n;i++)
        {
            printf("enter a number\n");
            scanf("%d",(p+i));  //* no use of this//
        }
        printf("contet of an array which i entered above for loop\n");
        for(i=0;i<n;i++)
        {
            printf("%2d",*(p+i));
        }






        int new=n+4; //n=5+4=9
        p=(int*)realloc(p,new*sizeof(int));
        if(p==NULL)
        {
            printf("allocation failed\n");
        }
        for(i=0;i<new;i++)
        {
            printf("enter a number\n");
            scanf("%d",(p+i));  //* no use of this//
        }
        printf("contet of an array which i entered above for loop\n");
        for(i=0;i<new;i++)
        {
            printf("%2d",*(p+i));
        }


    }
    free(p);
    return 0;
}