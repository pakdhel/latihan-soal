#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m = 80, n = 12;
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    printf("%d\n", m);
    return 0;
}
