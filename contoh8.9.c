#include <stdio.h>

int main()
{
   char c;
   int sum = 0;
   scanf("%c", &c);fflush(stdin);
   while (c != '.')
   {
      sum++;
      scanf("%c", &c);fflush(stdin);
   }
   printf("Banyaknya karakter yang dimasukkan %d", sum);
   return 0;
}