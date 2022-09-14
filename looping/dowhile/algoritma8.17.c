// menghitung rata-rata dari nilai yang di masukkan user

#include <stdio.h>

int main()
{
   int i, n = 0, sum = 0;
   float me;
   do
   {
      n++;   
      scanf("%d",&i);
      sum = sum + i;
      
   }  while(i>=0);

   if (i<0) {
         sum = sum - i;
         n--;
         if (n==0)
                  printf("INVALID OPERATION");
         else {
            me = (float)sum/n;
            printf("total %d\nrata-rata %g", sum, me); 
         } 
   }
   return 0;
}