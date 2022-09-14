// seleksi maksimum
// terurut menaik
#include <stdio.h>

int main()
{
    int array[10] = {4,2,6,9,3,5,7,0,1,8};
    int size = sizeof(array)/sizeof(*array);
    int temp, imax;
    
    printf("\nArray : ");
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    
    for(int maks=size-1;maks>0;maks--){
        imax = maks; // indeks maksimum sementara
        // algoritma mengambil indeks dari nilai maksimum dalam array yang baru
        for(int i=0;i<maks;i++){
            if(array[i] > array[imax]){
                imax = i;
            }
        }
        temp = array[imax];
        array[imax] = array[maks];
        array[maks] = temp;
    }
    printf("\nArray : ");
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }

    return 0;
}
