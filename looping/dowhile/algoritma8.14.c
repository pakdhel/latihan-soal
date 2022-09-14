// mencetak N kali "Hello, World!"
#include <stdio.h>

int main()
{
   int N;
   scanf("%d", &N);
   int i = 1;
   do
   {
      printf("Hello, World!\n");
      i++;
   } while (i <= N);
   return 0;
}