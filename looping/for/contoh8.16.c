// menghitung perpangkatan, a pangkat n

#include <stdio.h>
#include <math.h>
int main()
{
   int n, a;
   float hasil = 1;
   printf("menghitung a pangkat n\n");
   printf("a = ");scanf("%d", &a);
   printf("n = ");scanf("%d", &n);

   for (int i=1;i<=fabs(n);i++) 
      hasil = hasil * a;
   
   if (n < 0) printf("hasil = %g\n", (float)1/hasil);
   else printf("hasil = %g\n", hasil);
   return 0;
}