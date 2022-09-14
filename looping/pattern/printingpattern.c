#include <stdio.h>

void printpattern(int n) {
    for (int i = 1; i <= n - 1; i++) {
        int temp = n;
        for (int j = 1; j <= i; j++) {
            printf("%d ", temp);
            temp--;
        }
        for (int k = n - 1; k >= i; k--) {
            printf("%d ", temp + 1);
        }
        for (int k = n - 1; k >= i + 1; k--) {
            printf("%d ", temp + 1);
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", temp + 1);
            temp++;
        }
        printf("\n");
    }
}


int main(int argc, char const *argv[])
{
    printpattern(4);
    return 0;
}

