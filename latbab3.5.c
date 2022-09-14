#include <stdio.h>

int main()
{
	float velocity,time,distance;
	printf("v (km/h) : ");scanf("%f", &velocity);fflush(stdin);
	printf("t (h) : ");scanf("%f", &time);

	printf("A car is moving with a speed of %.2f km/h in %.2f hours\n", velocity,time);
	distance = velocity*time;
	printf("s = v x t\n");
	printf("s = %.2f km\n", distance);
	
	
}