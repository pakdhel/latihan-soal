#include <stdio.h>

int main()
{
   int N, i, sum = 0;
   i = 1;
   scanf("%d",&N);

   while (i <= N)
   {
      sum = sum + i;
      i += 1;         
   }
   printf("i = %d\nsum = %d\n", i, sum);
   return 0;
}