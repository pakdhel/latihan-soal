#include <stdio.h>

int main()

{
   int start, end, size;

   scanf("%d %d %d", &start,&end, &size);
   
   for (int i=start;i <= end; i++)
   {
	printf("%03d ", i);      

	if (i % size == 0)
          printf("\n");
      
   }
 
}