#include <iostream>
using namespace std;

int euclidean(int x, int y) {
    int r;
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int rekursifEuclidean(int x, int y) {
    int r;
    if (y == 0) return x;
    else {
        r = x % y;
        return rekursifEuclidean(y, r);
    }
}

int main(int argc, char const *argv[])
{
    cout << euclidean(24,9) << endl;
    cout << rekursifEuclidean(24,9) << endl;
    return 0;
}
