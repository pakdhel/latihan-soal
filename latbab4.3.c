#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	float celcius,fahrenheit,results_c,results_f;
	float f_to_c(float f);
	float c_to_f(float c);

	char choose,choose2;
	
	jump:
	system("cls");
printf("\t\ttemperatur convertion\n");
printf("\t===================================================\n\n");
	printf("1. Celcius to fahrenheit\n");
	printf("2. fahrenheit to celcius\n");
	fflush(stdin);
	printf("Please choose (1/2) : ");
	choose = getchar();
	
	
	if (choose == '1'){
		printf("\t===================================================\n\n");
		printf("Enter the temperatur in celcius : ");scanf("%f", &celcius);
		fflush(stdin);
		results_f = c_to_f(celcius);
		
		printf("Temperatur in Fahrenheit : %.3f\n", results_f);

		printf("Back to menu?(y/t) ");
		choose2 = getchar();

		if(choose2 == 'y')
		{
			goto jump;
		}else{
			printf("\nThanks\n");
		}
	}else if (choose == '2'){
		printf("\t===================================================\n\n");
		printf("Enter the temperatur in fahrenheit : ");scanf("%f", &fahrenheit);
		fflush(stdin);
		results_c = f_to_c(fahrenheit);
		
		printf("Temperatur in celcius : %.3f\n", results_c);

		printf("Back to menu?(y/t) ");
		choose2 = getchar();

		if(choose2 == 'y')
		{
			goto jump;
		}else{
			printf("\nThanks\n");
		}		
	}else{
		printf("ERROR\n");
	}

return 0;
}
float c_to_f(float c)
{
	float f;
	f = (9*c/5)+32;
	return f;
}

float f_to_c(float f)
{	
	float c;
	c= 5*(f-32)/9;
	return c;	
}