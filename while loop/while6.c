#include<stdio.h>
#include<math.h>
int main()
{
    int quit = 0;
	int n;  // n is the number for which you will find factorial
	int p;  // you are going to keep the factorial of n in p
	int base, exp; // for a^b

	int option; // for keeping the menu option
	while(!quit)
	{
	    printf("\n menu\n");
	    printf("\n1.factorial\n");
	    printf("\n2.power\n");
	    printf("\n3.quit\n");
	    printf("what you want to do\n");
	    scanf("%d",&option);
	    if(option==1)
        {


            printf("enter the number\n");
            scanf("%d",&n);
           if(n>0&&n<=10)
           {


                int i=1;
                int fact=1;
            while(i<=n)
            {
                fact=fact*i;
                i++;
            }
            printf("%d",fact);
        }
        else
        {
            printf("invalid nos u enter\n");
        }
        }


       else if(option==2)
       {
           int result=0;
            printf("enter the power\n");
            scanf("%d",&base);
            printf("enter the base\n");
            scanf("%d",&exp);
            result=pow(base,exp);
            printf("power is %d\n",result);
       }

            else if(option==3)
            quit=1;
            else{
                printf("invalid choice\n");
            }


	}
}


