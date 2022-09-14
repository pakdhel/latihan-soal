// tulislah fungsi tanpa parameter yang membaca panjang alas dan tinggi
// sebuah segitiga

#include <stdio.h>

float triangle();
float triangle()
{
   int alas, tinggi;
   float luas;
   printf("Alas : ");scanf("%d", &alas);
   printf("Tinggi : ");scanf("%d", &tinggi);
   luas = (float) alas*tinggi/2;
   printf("Luas segitiga %g\n", luas);
}

int main()
{
   triangle();   
   return 0;
}