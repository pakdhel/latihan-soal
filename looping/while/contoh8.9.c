// menghitung banyaknya karakter yang dimasukkan user

#include <stdio.h>
#include <stdbool.h>
int main()
{
   int sum =0;
   char c;
   bool status = false;
   while (!status)
   {
      scanf("%c", &c);fflush(stdin);
      sum++;
      if (c == '.')
      {
         status = true;
         sum--;
      }
   }  
   printf("Banyaknya karakter yang dimasukkan %d\n",sum);
   return 0;
}