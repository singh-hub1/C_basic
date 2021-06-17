#include<stdio.h>
int display_month(int month)
{
    int months[12]={4,5,6,7,8,9,10,11,12,1,2,3};
    int i=0;
    for(i=0;i<12;i++)

        if(months[i]==month)

    return i+1;
}








int main()
{
    int k,s;
    printf("financial month is");
    scanf("%d",&s);
    k=display_month(s);
    printf("financial month is %d",k);
}
