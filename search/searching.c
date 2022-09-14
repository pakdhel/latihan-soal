#include <stdio.h>

int searching(int a, int arr[], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == a) {
            return i;
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int len = sizeof(arr)/sizeof(*arr);

    int a = 12;
    int index = searching(a, arr, 10);
    printf("index nilai yang dicari : %d\n", index);

    return 0;
}
