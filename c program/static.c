#include<stdio.h>

void test()
{
   static int v;//initial value=0;
   printf("v=%d\n",v);//v=0 ,v=1
   v++;
   printf("v=%d\n",v);//v=1,v=2
}
int main()
{
  test();
  test();
  
  return 0;
}