#include <stdio.h>

int main()
{
	struct fraction
	{
		int a,b;	
	};

	struct fraction p1,p2,p3;
       	printf("fraction1 : ");scanf("%d,%d", &p1.a, &p1.b);fflush(stdin);
       	printf("fraction2 : ");scanf("%d,%d", &p2.a, &p2.b);fflush(stdin);

	// p3 = p1 + p2
	p3.a = p1.a*p2.b + p2.a*p1.b;
	p3.b = p1.b*p2.b;

	printf("%d/%d\n\n", p3.a,p3.b);	

	// p3 = p1 - p2
	p3.a = p1.a*p2.b - p2.a*p1.b;
	p3.b = p1.b*p2.b;
	printf("%d/%d\n\n", p3.a,p3.b);

	// p3 = p1 * p2
	p3.a = p1.a*p2.a;
	p3.b = p1.b*p2.b;
	printf("%d/%d\n\n", p3.a,p3.b);

	// p3 = p1 / p2
	p3.a = p1.a*p2.b;
	p3.b = p2.a*p1.a;
	printf("%d/%d\n\n", p3.a,p3.b);


	return 0;
}