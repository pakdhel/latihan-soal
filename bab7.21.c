/*
    kode wilayah        wilayah kota        tarif tiap pulsa        lama pulsa
    02                  Jakarta             Rp150                   1 menit
    0751                Padang              Rp250                   30 detik
    0737                Medan               Rp375                   25 detik
    091                 Balikpapan          Rp415                   20 detik
    098                 ternate             Rp510                   17 detik            
*/


#include <stdio.h>
#include <string.h>

typedef struct waktu
{
    int hh,mm,ss;
    float tar,l,tot;
}time, pulsa;

int main()
{
    time time1,time2,time3;
    pulsa tarif,lama,total;
     // tarif (Rupiah), lama (detik)
    char code[5];
    label:
    printf("\n\tTOTAL CALL PAYMENT CALCULATION\n");
    printf("\nEnter code of city : ");gets(code);

    if (strcmp(code, "02") == 0)
    {
        tarif.tar = 150; 
        lama.l = 60; 
    }
    else if (strcmp(code, "0751") == 0)
    {
        tarif.tar = 250; 
        lama.l = 30; 
    }
    else if (strcmp(code, "0737") == 0)
    {
        tarif.tar = 375; 
        lama.l = 25; 
    }
    else if (strcmp(code, "091") == 0)
    {
        tarif.tar = 415; 
        lama.l = 20; 
    }
    else if (strcmp(code, "098") == 0)
    {
        tarif.tar = 510; 
        lama.l = 17; 
    }
    else
    {
        printf("\n\tCITY CODE UNREGISTERED\n");
        goto label;
    }
    printf("\n================================");
    printf("\nCall Started (hh:mm:ss) => ");scanf("%d:%d:%d", &time1.hh,&time1.mm,&time1.ss);
    printf("\nCall Ended (hh:mm:ss)   => ");scanf("%d:%d:%d", &time2.hh,&time2.mm,&time2.ss);
    
    if (time2.ss >= time1.ss)
    {
        time3.ss = time2.ss - time1.ss;
    }
    else
    {
        time2.mm -= 1;
        time2.ss += 60;
        time3.ss = time2.ss - time1.ss;
    }

    if (time2.mm >= time1.mm)
    {
        time3.mm = time2.mm - time1.mm;
    }
    else
    {
        time2.hh -= 1;
        time2.mm += 60;
        time3.mm = time2.mm - time1.mm;
    }

    if (time2.hh >= time1.hh)
    {
        time3.hh += 24;
        time3.hh = time2.hh - time1.hh;
    }
    
    //  time3.ss = time2.ss - time1.ss;
    //  time3.mm = time2.mm - time1.mm;
    //  time3.hh = time2.hh - time1.hh;

    total.tot = time3.hh * 3600 + time3.mm * 60 + time3.ss;
    tarif.tar = total.tot * tarif.tar / lama.l;

    printf("\n\tTotal Call Payment : Rp %g\n", tarif.tar);

    return 0;
}