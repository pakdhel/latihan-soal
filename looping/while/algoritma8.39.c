// contoh 8.18
// konversi desimal to biner

#include <stdio.h>
#include <string.h>

int main()
{
    char biner[100] = ""; 
    char nol[100] = "0";
    char satu[100] = "1";
    int d, len1;
    int r;
    
    printf("Enter the decimal : ");scanf("%d", &d);

    while (d > 0)
    { 
        r = d % 2;
        switch (r)
        { 
            case 0:
                for (int j=0;j<=len1;j++)
                    biner[len1+j] = nol[j];
		break;
            case 1:
                for (int i=0;i<=len1;i++)
                    biner[len1+i] = satu[i];
		break;
        }
        len1 = strlen(biner);
        d = d/2;
    }
    strrev(biner);
    printf("biner : %s\n", biner);

}