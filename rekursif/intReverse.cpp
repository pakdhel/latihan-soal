#include <iostream>
using namespace std;

int reverse(int a) {
    int total = 0;
    while (a > 0) {
        int digit = a % 10;
        total = total * 10 + digit;
        a = a / 10;
    }
    return total;
}

void recursionReverse(int a) {
    if (a < 10) cout << a;
    else {
        cout << a % 10;
        recursionReverse(a / 10);
    }
}

int polinom(int a) {
    int total = 0;
    if (a == 0) return a;
    else {
        return ( a % 10 + polinom(a / 10) ) * 10;
    }
}

int main(int argc, char const *argv[])
{
    cout << reverse(1234) << endl;
    recursionReverse(4567);
    cout << endl;
    cout << polinom(234) << endl;
    return 0;
}
