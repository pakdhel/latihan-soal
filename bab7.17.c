#include <stdio.h>
#define A 4000
#define B 5000
#define C 6000
#define D 7500
#define BATAS 48
#define LEMBUR 3000
int main()
{
    char nama[20], golongan;
    int upah, jam_kerja;
    label:
    fflush(stdin);
    printf("Enter your name : ");gets(nama);
    printf("Group: ");golongan = getchar();
    printf("\n==========================================\n");
    switch (golongan)
    {
    case 'A':
        upah = A;
        break;
    case 'B':
        upah = B;
        break;
    case 'C':
        upah = C;
        break;
    case 'D':
        upah = D;
        break;
    default:
        printf("\nNOT IN ANY GROUP\n");
        printf("\n==========================================\n");
        goto label;
    }

    printf("Working Hours during a week: ");scanf("%d", &jam_kerja);
    if (jam_kerja > BATAS)
    {
        upah = upah * BATAS + (jam_kerja - BATAS) * LEMBUR;
    }
    else
    {
        upah = upah * jam_kerja;
    }

    printf("Your Weekly Salary: Rp %d\n", upah);
    
    

    return 0;
}