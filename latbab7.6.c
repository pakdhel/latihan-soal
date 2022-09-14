#include <stdio.h>

int main()
{
    // pecahan 25, 50 , 100
    int belanja,sisa;
    printf("Berapa total belanja anda (dalam bilangan bulat) : ");
    scanf("%d", &belanja);

    if (belanja % 25 == 0)
        belanja = belanja;
    else
    {
        sisa = belanja % 100;
        if (sisa < 25)
        {
            belanja -= sisa;
        }
        
        else if (sisa > 25 && sisa < 50)
        {
            sisa = belanja % 25;
            belanja -= sisa;
        }
        else //if (sisa > 50)
        {
            sisa = belanja % 50;
            belanja -= sisa;
        }
        
    }
    

    printf("Total belanja anda adalah %d\n", belanja);
    
    return 0;
}