#include <iostream>
using namespace std;



int main(int argc, char const *argv[])
{
    int n = 2;
    for (int i = 1; i <= 2*n - 1; i++) {
        int x = i;
        for (int j = i; j <= 2*i - 1; j++) {
            printf("%d ",x);
            if (x < 2*i - 1) {
                x++;
            } else  {
                x--;
            }
        }
        printf("\n");
    }
    return 0;
}
