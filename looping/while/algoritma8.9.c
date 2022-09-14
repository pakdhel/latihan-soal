#include  <stdio.h>

int main()
{
   // mencetak angka 1 sampai N
   int N;
   scanf("%d",&N);
   int i = 1;
   while (i <= N)
   {
      printf("%d, ",i);
      i += 1;
   }

   return 0;
}