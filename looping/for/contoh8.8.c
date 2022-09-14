// lirik lagu anak ayam menggunakan perulangan for

#include <stdio.h>

int main()
{
   int a;
   printf("Anak ayam turun ");scanf("%d", &a);
/*
   for (int i=a;i>0;i--)
   {
      a--;
      if (a==0) printf("Anak ayam turun 1, mati satu tinggal induknya");
      else printf("Anak ayam turun %d, mati satu tinggal %d\n", i, a);
   }*/
 
   for (int i=a;i>1;i--)
   {
      a--;
      printf("Anak ayam turun %d, mati satu tinggal %d\n", i, a);
   }

   printf("Anak ayam turun 1, mati satu tinggal induknya\n");
   
   return 0;
}