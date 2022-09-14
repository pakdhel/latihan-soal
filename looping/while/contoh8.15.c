// menghitung perpangkatan a pangkat n

#include <stdio.h>

int main() {
   int a,n,b, pangkat = 1,i = 1;
   printf("menghitung perpangkatan, a pangkat n\n");
   printf("a = ");scanf("%d", &a);
   printf("n = ");scanf("%d", &n);   
   b = a;
   if (n != 0) {
      while (pangkat <= n-1){
         b = a * b;
         pangkat++;
      }
   }
   printf("%d pangkat %d sama dengan %d\n", a, n, b);
}