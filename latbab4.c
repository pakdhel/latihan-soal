#include <stdio.h>

int main()
{
	char nama[20], kota[20];
	printf("Halo, siapa namamu? ");
	scanf("%s", &nama);
	printf("Di kota apa kamu sekarang? ");	
	scanf("%s", &kota);

	printf("Senang bertemu denganmu %s, di kota %s ", nama,kota);
return 0;
}