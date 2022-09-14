#include <stdio.h>

int main()
{
	float price,discount,percent_discount,after_discount;
	printf("cost (rb) = ");scanf("%f", &price);
	printf("discount (percent) = ");scanf("%f", &percent_discount);
	printf("\n=============================================\n\n");
	discount = (percent_discount/100)*price;
	after_discount = price - discount;
	
	printf("an item with a price of Rp%.2f and a discount of %.2f percent, ", price,percent_discount);
	printf("\nthe price after discount is Rp%.2f\n", after_discount); 

}