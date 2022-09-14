#include <stdio.h>
#define BATAS 48
#define GAJILEMBUR 3000
#define A 4000
#define B 5000
#define C 6000
#define D 7500

char golongan,nama[30];
float jam_kerja, upah;

int main()
{
    // printf("NAME : ");scanf("%s", nama);
    // printf("\n%s", nama);
    
    printf("NAME : ");gets(nama);fflush(stdin);
    printf("Group (A,B,C,D): ");golongan = getchar();fflush(stdin);
    printf("Working Hours during the week : ");scanf("%f", &jam_kerja);

    if (golongan == 'A')
    {
        upah = 4000;            
    }
    else if (golongan == 'B')
    {
        upah = 5000;
    }
    else if (golongan == 'C')
    {
        upah = 6000;
    }
    else if (golongan == 'D')
    {
        upah = 7500;
    }
    printf("\n=======================================\n");

    if (golongan != 'A' && golongan != 'B' && golongan != 'C' && golongan != 'D')
    {
        printf("Tidak termasuk dalam daftar\n");    
    }
    else
    { 
        if (jam_kerja > BATAS)
        {
            upah = upah * BATAS + (jam_kerja - BATAS) * GAJILEMBUR;
        }
        else
        {
            upah = upah * jam_kerja;
        }

        printf("\nNama Karyawan: %s\nGolongan: %c\nGaji perminggu: %g\n", nama,golongan,upah);
    }
    return 0;


}