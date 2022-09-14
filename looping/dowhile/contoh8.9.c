// menghitung jumlah karakter

#include <stdio.h>

int main()
{
   char c; 
   int sum = 0;
   
   do
   {
      //fflush(stdin);
      sum++;
      printf("Masukkan karakter (kecuali titik (.)) ");scanf("%c", &c);fflush(stdin);
   } while (c != '.');

   if (c == '.') sum--;
   
   printf("Jumlah karakter yang dimasukkan = %d\n", sum);
   return 0;
}