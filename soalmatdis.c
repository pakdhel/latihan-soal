#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tot = 0;
    for (int i = 1; i <= 300; i++) {
        if ((i % 3 == 0 && i % 5 != 0) && (i % 7 != 0 && i % 3 == 0)) {
            tot++;
        }
    }
    printf("%d ", tot);
    return 0;
}
