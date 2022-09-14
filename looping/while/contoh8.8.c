#include <stdio.h>

int main()
{
   int anak_ayam;
   printf("Anak Ayam Turun ");scanf("%d", &anak_ayam);
   while (anak_ayam > 0)
   {
      printf("Anak Ayam Turun %d, ", anak_ayam);
      anak_ayam = anak_ayam - 1;
      if (anak_ayam == 0) printf("mati satu tinggal induknya"); 
      else printf("mati satu tinggal %d\n", anak_ayam);    

   }
return 0;
}