#include <stdio.h>

typedef struct Mahasiswa Mahasiswa;

struct Mahasiswa {
   char nama[50];
   char nim[20];
   float IPK;
};


void cetak_IPK_lebih2(Mahasiswa mhs[], int n) {
   for (int i = 0; i < n; i++) {
      if (mhs[i].IPK > 2) {
         printf("%d.\tNama \t: %s\n", i+1,mhs[i].nama);
         printf("\tNIM \t: %s\n", mhs[i].nim);
         printf("\tIPK \t: %g\n", mhs[i].IPK);
      }
   }
}

int ambilIndexMaks(Mahasiswa mhs[], int n) {
   int idx = 0;
   for (int i = 1; i < n; i++) {
      if (mhs[idx].IPK < mhs[i].IPK) idx = i;
   }
   return idx;
}

int ambilIndexMin(Mahasiswa mhs[], int n) {
   int idx = 0;
   for (int i = 0; i < n; i++) {
      if (mhs[idx].IPK > mhs[i].IPK) idx = i;
   }
   return idx;
}

void cetakNilaiMaxMin(Mahasiswa mhs[], int n) {
   printf("Data Mahasiswa nilai tertinggi\n");
   printf("\tNama \t: %s\n", mhs[ambilIndexMaks(mhs, n)].nama);
   printf("\tNIM \t: %s\n", mhs[ambilIndexMaks(mhs, n)].nim);
   printf("\tIPK \t: %g\n", mhs[ambilIndexMaks(mhs, n)].IPK);
   printf("Data Mahasiswa nilai terendah\n");
   printf("\tNama \t: %s\n", mhs[ambilIndexMin(mhs, n)].nama);
   printf("\tNIM \t: %s\n", mhs[ambilIndexMin(mhs, n)].nim);
   printf("\tIPK \t: %g\n", mhs[ambilIndexMin(mhs, n)].IPK);
}

int main() {
   Mahasiswa mhs[50];
   int n;
   printf("Jumlah mahasiswa : "); scanf("%d", &n); fflush(stdin);

   for (int i = 0; i < n; i++) {
      printf("Nama Mahasiswa ke-%d : ", i + 1); scanf("%[^\n]s", &mhs[i].nama); fflush(stdin);
      printf(" NIM Mahasiswa ke-%d : ", i + 1); scanf("%s", &mhs[i].nim); fflush(stdin);
      printf("IPK Mahasiswa ke-%d : ", i + 1); scanf("%f", &mhs[i].IPK); fflush(stdin);
   }


   cetak_IPK_lebih2(mhs, n);
   printf("\n");
   cetakNilaiMaxMin(mhs, n);

}
