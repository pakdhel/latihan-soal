// menentukan data terkecil

#include <stdio.h>

int main()
{
   int min, a;
   scanf("%d", &a);
   min = a;
   while (a != -1)
   {
      if (a <= min) min = a;  
      scanf("%d", &a);fflush(stdin);
   }
   printf("angka minimum : %d", min);
   return 0;
}