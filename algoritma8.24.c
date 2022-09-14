/*
	Golongan	Upah perjam	 Upah Lembur perjam
	   A		    4000	    3000
	   B		    5000
	   C		    6000
	   D		    7500
*/

#include <stdio.h>
#define lembur 3000
#define A 4000
#define B 5000
#define C 6000
#define D 7500
#define batas 48
int main()
{
   char gol, ya, nama[20];
   float jam_kerja, upah, upah_lebih, total;
   
   do {
   printf("\n");
   printf("Nama : ");gets(nama); 
   printf("Golongan : ");scanf("%c", &gol);
   printf("Jam kerja seminggu : ");scanf("%f", &jam_kerja);fflush(stdin);
   
   switch (gol)
   {
      case 'A': upah = A;break;
      case 'B': upah = B;break;
      case 'C': upah = C;break;
      case 'D': upah = D;break;
      default:break;
   }

   printf("\nHalo, %s\n", nama);
   
   if (gol == 'A' || gol == 'B' || gol == 'C' || gol == 'D') 
   {
      if (jam_kerja >= batas) upah_lebih = (jam_kerja - batas) * lembur;
      else upah_lebih = 0;   
 
      total = batas * upah + upah_lebih;
      printf("Total gaji anda selama minggu ini : Rp %g,00\n", total);  
   }
   else // (gol != 'A' || gol != 'B' || gol != 'C' || gol != 'D')
     printf("	   \tANDA TIDAK TERDAFTAR\n	");

   printf("\nUlangi untuk karyawan lain?(y/t) ");scanf("%c", &ya);  
   fflush(stdin);
   } while (ya == 'y' || ya == 'Y');   
   return 0;
}