#include <stdio.h>

int main()
{
    int a[10] = {4,2,6,9,3,5,7,0,1,8}; // 1 2 3 4 5 6 7 9 8
    // 2 4 6 9 3
    int length = sizeof(a)/sizeof(*a);
    int temp;
    int index;
    int count = 0;

    for(int i=0;i<length;i++){
        printf("%d ",a[i]);
    }

    for(int i=1;i<length;i++){
        temp = a[i];
        for(int j=i-1;j>=0;j--){
            if(a[i] < a[j]){

                index = j;
            }
        }
        for(int k=i-1;k>=index;k--){
            a[k] = a[k-1];
        }
        a[index] = temp;
    }

    printf("\n");
    for(int i=0;i<length;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
