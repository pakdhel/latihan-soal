// menghitung deret pecahan

#include <stdio.h>

int main()
{
   int N, k = 1, i = 1;
   float sum; 
   scanf("%d", &N);
   while (k <= N) {
      if (i % 2 == 0) sum = sum - (float) 1/k;
      else sum = sum + (float) 1/k; 
      k += 2;
      i++;
   }
   printf("sum = %g\n", sum);
   return 0;
}