// konversi desimal ke biner

#include <stdio.h>

int main()
{
   int D, r, biner = 0, i = 0;

   printf("Enter the Decimal Number : ");scanf("%d",&D);
   while (D > 0) {
      r = D % 2;
      biner = 10*r + r; break;
      D = D/2; 
   }
   printf("Binary : %d\n", biner);
   return 0;
}