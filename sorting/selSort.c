#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10] = {3,2,5,7,1,6,9,0,4,8};
    int n = 10;
    int idx;
    for (int i = 0; i < n - 1; i++) {
        idx = i;
        for (int j = idx; j < n; j++) {
            if (arr[j] < arr[idx]) idx = j;
        }
        int temp = arr[idx];
        arr[idx] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
