// contoh 11.5

#include <stdio.h>

char *nama(int);

int main()
{
    int num;
    char month[20];
    scanf("%d", &num);
    printf("%s\n", nama(num));    
    return 0;
}

char *nama(int a)
{
    switch (a)
    {
        case 1: return "Januari";break;
        case 2: return "Februari";break;
        case 3: return "Maret";break;
        case 4: return "April";break;
        case 5: return "Mei";break;
        case 6: return "Juni";break;
        case 7: return "Juli";break;
        case 8: return "Agustus";break;
        case 9: return "September";break;
        case 10: return "Oktober";break;
        case 11: return "November";break;
        case 12: return "Desember";break;
        default : break;
    }
}