#include <stdio.h>

int main()
{
   char c;
   int digit = 0, spasi = 0, cc = 0;
   scanf("%c", &c);fflush(stdin);
   while (c != '.')
   {
      switch (c)
      {
	 case '0': digit++;break;
	 case '1': digit++;break;
	 case '2': digit++;break;
	 case '3': digit++;break;
	 case '4': digit++;break;
	 case '5': digit++;break;
	 case '6': digit++;break;
	 case '7': digit++;break;
	 case '8': digit++;break;
	 case '9': digit++;break;
	 case ' ': spasi++;break;
	 default:cc++;break;
      }  
      scanf("%c", &c);fflush(stdin);
   }
   printf("jumlah digit %d, jumlah spasi %d, jumlah karakter lainnya %d\n", digit, spasi, cc);
}