// SOAL LATIHAN BAB 8

#include <stdio.h>

// NO 4
/*
int main()
{
    int a;
    scanf("%d", &a);

    for (int i=1;i<=a-1;i++){
         for (int j=1;j<=i;j++){
              printf("*");
         }
         printf("\n");
    }
    for (int k=1;k<=a;k++) printf("*");
    printf("\n");
    for (int l=1;l<=a-1;l++){
         for (int m=a-1;m>=l;m--){
              printf("*");
         }
         printf("\n");
    }    
}
*/

// NO 5
// banyaknya solusi bilangan bulat non negatif dari x + y + z = 25
/*
int main()
{
    int solusi = 0;
    for (int x=0;x<=30;x++)
    {                                 
        for (int y=0;y<=30;y++)
        {                                
            for (int z=0;z<=25;z++)
            {                             
                if (x+y+z == 25) solusi++;
            }
        }
    }
    printf("Jumlah solusi : %d\n", solusi);
}

*/



/*
// NO 6
#include <string.h>

int main()
{
    int i=1, a, sisa, satuan;
    char hasil[100] = "";
    int decimal[4][9] = 
    {
        {1,2,3,4,5,6,7,8,9},
        {10,20,30,40,50,60,70,80,90},
        {100,200,300,400,500,600,700,800,900},
        {1000,2000,3000,4000,0,0,0,0,0}
    };

    char romawi[4][9] = 
    {                  
        {"I","II","III","IV","V","VI","VII","VIII","IX"},
        {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
        {"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
        {"M","MM","MMM","MMMM","","","","",""}
    };

    printf("Masukkan Angka positif : ");scanf("%d",&a);

    while (a>0)
    {
        i *= 10;
        sisa = a % i;
        satuan = sisa;
        
        for (int j=0;j<3;j++)
        {                            
            for (int k=0;k<9;k++)
            {                          
                if (satuan == decimal[j][k])
                {
                    strcpy(hasil, strcat(hasil, romawi[j][k]));
                }
            } 
        }
        a = a - sisa;        
    }
}
*/


// NO 9
// MENENTUKAN APAKAH SUATU BILANGAN ADALAH PRIMA

#include <math.h>
#include <stdbool.h>

int main()
{
    int a, counter = 0;
    scanf("%d",&a);

    if (a>1)
    {
        for (int i=2;i<=sqrt(a);i++)
        {
            if (a%i==0) counter++;
        }
    }

    if (counter == 0) printf("Prima\n");
    else printf("Bukan prima\n");

    // if (!value) printf("Bukan prima\n");
    // else if (counter > 0) printf("Bukan prima\n");
    // else printf("Prima");
    
    return 0;
}



// SOAL 8
// DERET FIBONACCI

/* int main()
{
    int a;
    int f1,f2, fhasil;
    f1 = 1, f2 = 1;
    scanf("%d", &a);

    fhasil = f1 + f2;
    printf("%d ", f1); 


    for (int i=1;i<a;i++)
    {
        printf("%d ", f2);
        f1 = f2;
        f2 = fhasil;
        fhasil = f1 + f2;
    }    
    return 0;
}
 */






















