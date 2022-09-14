#include <stdio.h>

int main()
{ 
   int N, i, sum = 0;
   int x;
   //float x;
   float m;

   i = 1;
   printf("Banyaknya data yang akan di rata-ratakan : ");scanf("%d", &N);
   
   while (i <= N)
   {
      printf("x(%d) = ", i);scanf("%d",&x); // membaca setiap data yang dimasukkan
      sum = sum + x; // total penjumlahan dari semua data yang dimasukkan
      i += 1;
   }
   
   m = (float) sum/N;
   printf("sum = %d\nmean = %g\n", sum, m);
   return 0;
}