#include <stdio.h>

int main()
{
   int N, i, x, sum = 0;
   float m;
   i = 0;

   printf("x = ");scanf("%d",&x);
   while (x >= 0)
   {
      sum = sum + x;
      i += 1;
      printf("x = ");scanf("%d",&x);
   }
  
   if (i != 0) 
   { 
      m = (float) sum/i;
      printf("i %d\nsum %d\nmean %g\n",i, sum, m);
   }
   else
   {
      printf("INVALID OPERATION");
   }   
    return 0;
}