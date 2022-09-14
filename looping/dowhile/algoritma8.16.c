// menghitung deret bilangan 1 sampai N 
// menghitung rata-rata

#include <stdio.h>

int main()
{
   int N, i, sum = 0;
   float m;
   scanf("%d", &N);
   i = 1;

   do
   {
      sum = sum + i;
      i++;       
   } while (i <= N);
   
   m = (float) sum/N;
   printf("sum  = %d\n", sum);
   printf("mean = %g\n", m);       
   return 0;
}