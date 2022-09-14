// menghitung faktorial, n!
// n! = n(n-1)!
// n! = n(n-1)(n-2)!
#include <stdio.h>

int main()
{
   int n, hasil = 1, N;
   printf("n faktorial\n");
   printf("n = ");scanf("%d", &n);
   N = n;
   while (N > 0) {
      hasil = hasil * N; 
      N--;
   } 
   printf("%d! = %d", n, hasil);
   return 0;
}