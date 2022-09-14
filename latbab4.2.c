#include <stdio.h>

int main()
{
	float p,l,alas,t,ttra,atas,alastra;
	printf("calculate the area of a flat shape\n");
	printf("1. Bujursangkar\n");	
	printf("2. segitiga\n");	
	printf("3. trapesium\n");	
	printf("\n==============================\n\n");

	printf("Enter the length and width of the square\n");		
	printf("P : ");scanf("%f", &p);
	printf("L : ");scanf("%f", &l);

	printf("Area of a square : %.3f\n", p*l);
	printf("\n==============================\n\n");

	printf("Enter the height and base of the triangle\n");		
	printf("H : ");scanf("%f", &t);
	printf("Base : ");scanf("%f", &alas);
	float areaTri = alas*t/2;
	
	printf("Area of a triangle : %.3f\n", areaTri);		
	printf("\n==============================\n\n");

	printf("Enter the height, top, and base of the trapezoid\n");		
	printf("H : ");scanf("%f", &ttra);
	printf("T : ");scanf("%f", &atas);
	printf("B : ");scanf("%f", &alastra);
	
	float areaTrape = (atas+alastra)*ttra/2;
	
	printf("Area of a trapezoid : %.3f\n", areaTrape);	
return 0;
}