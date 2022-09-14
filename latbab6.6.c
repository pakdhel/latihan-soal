#include <stdio.h>

int main()
{
	int x,km,m,cm;
	printf("\nAn ant travels a distance of x cm\n");
	printf("x: ");scanf("%d",&x);
	
	km = x/100000;
	x = x%100000;
	m = x/100;
	x = x%100;
	cm = x;

	printf("\nAn ant travels a distance of %d kilometers %d meters %d centimeters\n", km,m,cm);

return 0;
}