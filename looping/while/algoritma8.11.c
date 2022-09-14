#include <stdio.h>

int main()
{
   // menghitung rata-rata dari 1+2+3+...+N bilangan
   int N, i, sum = 0; 
   float m;
   scanf("%d", &N);
   while (i <= N)
   {
      sum = sum + i; // menghitung jumlah total 1 sampai N bilangan
      i += 1; 
   }
   m = (float)sum/N;
   printf("sum = %d\nmean = %g\n", sum, m);
   return 0;
}