#include <iostream>
#define N 10
using namespace std;

// (a)
int S(int n) {
    if (n == 1) return 1;
    return S(n - 1) + n * n * n;
}



// (d)
int minArray(int a[], int n) {
    if (n == 0) return a[n];
    else if (a[n] < minArray(a, n - 1)) return a[n];
    else return minArray(a, n - 1);
}

int main(int argc, char const *argv[])
{
    int a[N] = {2,1,7,4,5,9,-10,3,6,8};
    cout << minArray(a, N) << endl << endl;


    cout << S(3) << endl;
    return 0;
}
