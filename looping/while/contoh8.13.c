// menghitung jumlah kemunculan bilangan genap

#include <stdio.h>

int main()
{
   int a, var = 0, genap = 0;
   scanf("%d", &a);
   while (a != -1)
   {
      if (a % 2 == 0)
        genap++; 
      scanf("%d", &a); fflush(stdin);
   }
   printf("banyaknya data bilangan genap adalah %d buah", genap);
   return 0;
}