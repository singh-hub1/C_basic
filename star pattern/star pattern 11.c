#include<stdio.h>
int main()
{

    int i,j,k=0,rows;
    printf("enter number of rows\n");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        if(rows%2==0)  //even number
        {
            if(i<=rows/2)
                k++;
            if(i>rows/2 +1)
                k--;
        }
        else
            i<=(rows+1)/2?k++:k--;   //for odd number

    for(j=1;j<=(rows+1)/2;j++)
    {
        if(j<=k)
            printf("*");
        else
            printf(" ");
    }
    printf("\n");
    }

}
