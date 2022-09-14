#include <stdio.h>

int main()
{
	int x,y,z;
	printf("x: ");scanf("%d", &x);
	printf("y: ");scanf("%d", &y);
	printf("z: ");scanf("%d", &z);
	printf("\n%d %d %d\n\n",x,y,z);

	int temp;
	temp = x;
	x = y;
	y = z;
	z = temp;
	printf("%d %d %d\n\n",x,y,z);
	// x = 2, y = 3, z = 1

	x = x+y+z;
	z = x-y-z;
	y = x-y-z;
	x = x-y-z;

	printf("%d %d %d\n\n", x,y,z);
return 0;
}