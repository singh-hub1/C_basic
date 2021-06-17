#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n;
    printf("enter how many\n");
    scanf("%d",&n);
    int x[n];
    int i;
    srand(time(NULL));
   for(i=0;i<n;i++)
   {
       x[i]=rand()%100;
   }
   printf("content of an array\n");
   int sum=0;
   for(i=0;i<n;i++)
   {
       printf("%6d\n",x[i]);

       sum+=x[i];

   }
   printf("sum=%d\n",sum);
   double avg;
   avg=(double)sum/n;
   printf("average:%lf\n",avg);
   return 0;
}
