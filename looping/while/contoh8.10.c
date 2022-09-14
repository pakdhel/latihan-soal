// menghitung jumlah kemunculan angka, spasi, dan lainnya
// '1' '2' '3' '4' '5' '6' '7' '8' '9' '0' ' '
#include <stdio.h>
#include <stdbool.h>
int main()
{
   char c;
   int digit = 0, spasi = 0, cc = 0;
   bool status = false;
   scanf("%c", &c);fflush(stdin);
   while (c != '.')
   {  
      if (c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '0')
      {
         while (c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '0')
         {
            digit++;
            scanf("%c", &c);fflush(stdin);
         }
      } 
      else if (c == ' ')
      {
         while (c == ' ')
         { 
            spasi++;
            scanf("%c", &c);fflush(stdin);
         }
      }
      
   }
   printf("Jumlah digit %d, jumlah spasi %d, jumlah karakter lain %d", digit, spasi, cc);
   return 0;
} 