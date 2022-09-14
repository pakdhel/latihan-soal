#include <iostream>

using namespace std;

int a[10] = {4,1,6,2,8,9,0,3,7,5};
int n = sizeof(a)/sizeof(a[0]);
int x;

int searchArray(int j) {
    if (a[j] == x) return j;
    else if (j >= n) return -1;
    else return searchArray(j+1);
}

int main(int argc, char const *argv[])
{
    int j = 0;
    cout << "Nilai yang dicari : "; cin >> x;
    cout << searchArray(j) << endl;
    return 0;
}
