// menghitung rata-rata mata pelajaran setiap mahasiswa

#include <stdio.h>

int main()
{
   int N,m,nilai,total, i = 1;
   char nama[20];
   float mean;
   printf("Banyak siswa : ");scanf("%d", &N);fflush(stdin);
   printf("Banyak MP    : ");scanf("%d", &m);fflush(stdin);

   while (i <= N) {
      gets(nama);fflush(stdin);
      total = 0; 
      int j = 1;
      while (j <= m) {
         printf("nilai MP(%d) : ", j);scanf("%d", &nilai);fflush(stdin);
         total = total + nilai;
         j++;
      }
      mean = (float) total/m;
      printf("nama : %s, rata-rata : %g\n", nama, mean);
      i++;
   }
   return 0;
}