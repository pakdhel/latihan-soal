#include <stdio.h>

int main()
{
    // menentukan apakah sebuah segitiga termasuk segitiga siku-siku, lancip atau tumpul
    int a,b,c;
    printf("Masukkan panjang tiga buah sisi dari sebuah segitiga dengan syarat a <= b <= c (a,b,c) : ");
    scanf("%d,%d,%d", &a,&b,&c);

    if (c*c == a*a + b*b)
    {
        printf("Segitiga dengan panjang sisi %d %d %d adalah segitiga siku-siku\n", a,b,c);
    }
    else
    {
        if (c*c > a*a + b*b)
        {
            printf("Segitiga dengan panjang sisi %d %d %d adalah segitiga tumpul\n", a,b,c);
        }
        else
        {
            printf("Segitiga dengan panjang sisi %d %d %d adalah segitiga lancip\n", a,b,c);
        }  
    }
    
    
    return 0;
}