#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int x;
    scanf("%d", &x);

    if (x > 1) {
        for (int i = 3; i <= x; i = i + 2) {
            int flag = 1;
            for (int j = 3; j <= sqrt(x); j = j + 2) {
                if (x % j == 0) {
                    flag = 0; break;
                }
            }
            if (flag == 1) printf("%d ", i);
        }
    } else printf("Tidak ada hasil\n");
    return 0;
}
