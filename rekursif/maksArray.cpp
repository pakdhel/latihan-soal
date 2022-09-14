#include <iostream>

using namespace std;

int a[10] = {4,1,6,2,8,9,10,3,7,5};
int n = sizeof(a)/sizeof(a[0]);
int x;

// rekursif
int maks = a[0];
int nilaiMaks(int j) {
    if (j >= n) return maks;
    else if (maks < a[j]) {
        maks = a[j];
        return nilaiMaks(j+1);
    }
    else return nilaiMaks(j+1);
}

int maksArray() {
    int maks = a[0];
    for (int i = 1; i < n; i++)
    {
        if (maks < a[i]) maks = a[i];
    }
    return maks;
}

// rekursif
int recursiveMaks(int a[], int n) {
    if (n == 1) return a[1];
    else if (a[n] > recursiveMaks(a, n - 1)) return a[n];
    else return recursiveMaks(a, n - 1);
}

int main(int argc, char const *argv[])
{
    cout << "Nilai maksimum array : " << maksArray() << endl;
    cout << "Nilai maksimum array : " << nilaiMaks(1) << endl;
    cout << "Nilai maksimum array : " << recursiveMaks(a, n) << endl;
    return 0;
}
