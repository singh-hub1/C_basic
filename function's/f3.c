#include<stdio.h>
int linear_search(int[],int);
void no_search(int);
int linear_search(int[],int);
int main()
{
    int x[100],n;
    printf("enter how many numbers u want\n");
    scanf("%d",&n);
    input_array(x,n);
    k=linear_search(x,n);
}
    void input_array(int arr[],int n)
    {
        int i;
      printf("enter content of an array\n");
       for(i=0;i<n;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    }
    void no_search(int a)
{
     printf("enter a number to be search\n");
    scanf("%d",&a);
}
 int linear_search(int arr[],int n)
 {
     int i;
int search;
  search=no_search;
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            printf("%d is found at %d location\n",search,i+1);
            f=1;
        }
    }
    return;
    if(f==0)

        printf("%d is not found at any location!\n",a);

}
