// menentukan nilai terkecil

#include <stdio.h>

int main()
{ 
   int N, a, min;
   printf("Berapa banyak data? ");scanf("%d", &N);
   scanf("%d", &a);
   min = a;
   for (int i=1;i<N;i++)
   {
      scanf("%d", &a);
      if (a < min)    
        min = a;  
   }
   printf("angka minimum = %d\n", min);
   return 0;
}
