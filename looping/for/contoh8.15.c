// menghitung perpangkatan, a pangkat n

#include <stdio.h>

int main()
{
   int a, n, hasil = 1;
   printf("Menghitung perpangkatan a pangkat n\n");
   printf("a = ");scanf("%d", &a);
   printf("n = ");scanf("%d", &n);

   if (n == 0) hasil = 1;
   else {
      for (int i=1;i<=n;i++) 
         hasil = hasil * a;
   }

   printf("%d pangkat %d = %d\n", a, n, hasil);
}