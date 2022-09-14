#include <stdio.h>

int main()
{
   float n, mean, deret, sum = 0;
 
   printf("Masukkan banyaknya deret? ");scanf("%f", &n);
   
   if (n > 0)
   {
      for (int i=1;i<=n;i++)
      {
          printf("Masukkan nilai deret ke -%d: ", i);scanf("%f", &deret);
          sum += deret;    
      }
      mean = sum/n;
      printf("Rata-rata = %g\n", mean);
   }
   else
   {
      printf("INVALID OPERATION");
   }
   return 0;
}