// menghitung rata-rata mata pelajaran setiap mahasiswa

 #include <stdio.h>

int main()
{
   int N, m, nilai, total;
   char  nama[20];
   float mean;
   printf("Banyaknya siswa    	    : ");scanf("%d", &N);fflush(stdin);
   printf("Banyaknya mata pelajaran : ");scanf("%d", &m);fflush(stdin);

   for (int i=1;i<=N;i++){
      total = 0;
      gets(nama);fflush(stdin);
      for (int j=1;j<=m;j++) {
         printf("nilai MP(%d) : ", j);scanf("%d", &nilai);fflush(stdin);
	 total = total + nilai;         
      }
      mean = (float)total/m;
      printf("nama : %s, rata-rata : %g\n", nama, mean); 
   }
   return 0;
}