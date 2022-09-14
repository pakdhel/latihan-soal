#include <stdio.h>
#define N 50

typedef int lartikInt[N];

int main(int argc, char const *argv[])
{
    lartikInt arr = {11,12,13,14,15,16,17,18,19,20};
    
    int temp = arr[0];
    for (int i = 0; i < 10; i++) {
        arr[i] = arr[i + 1];
    }
    arr[9] = temp;

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
