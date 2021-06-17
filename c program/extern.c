#include<stdio.h>
 
 void test()
 {
   extern int g;
   printf("g=%d\n",g);
   g=20;
 }
 int g;
 int main()
 {
   printf("g=%d\n",g);
   g=10;
   test();
   printf("g=%d\n",g);
   return 0;
 }