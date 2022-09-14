// menghitung deret pecahan
// 1 - 1/3 + 1/5 - 1/7 + 1/9 + ... 1/N

#include <stdio.h>

int main()
{
   int N, n, i = 1, j = 1, k=0;
   float sum = 0;
   scanf("%d", &N);
   if (N % 2 == 0) n = N - 1;
   else n = N;

   for (i=1;i<=n;i+=2){
       k++;
       if (k % 2 == 0) j = -1*i;
       else j = i; 
       sum = sum + (float) 1/j;
   }
   printf("sum = %g\n", sum);
   return 0;
}