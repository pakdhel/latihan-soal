#include <stdio.h>

int main()
{
    int suhu;
 
    printf("\n\nEnter the tempertur in Celcius: ");scanf("%d", &suhu);
// suhu diatas 100 air berbentuk uap
// suhu diantara 0 sampai 100 berbentuk cair
// suhu dibawah 0 berbentuk padat atau es
    if (suhu>=100)
    {
        printf("\ntemperature at %d degrees Celsius in the form of steam", suhu);
 
    }
    else
    {
        if (suhu>0 && suhu<100)
        {
            printf("\ntemperature at %d degrees Celsius in liquid form", suhu);
 
        }
        else
        {
            if (suhu<=0)
            {
                printf("\ntemperature at %d degrees celsius is a solid", suhu);
 
            } 	
        }
    }
    

    return 0;
}