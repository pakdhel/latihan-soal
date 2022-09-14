// mencetak angka 1,2,3,...,N
#include <stdio.h>

int main()
{
   int N, i;
   scanf("%d", &N); // barisan terakhir
   i = 1;
   do
   {
      printf("%d ", i);
      i++;  
   }while(i <= N);   
   return 0;
}