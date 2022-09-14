#include <iostream>
using namespace std;

int rekursifFibonacci(int n);

int sum;
int n;
int count = 1;

int fibonacci(int m1, int m2);

int main(int argc, char const *argv[])
{
    cout << "suku ke n fibonacci" << endl;
    cout << "n : "; cin >> n;
    printf("==========\n");\
    cout << fibonacci(1,1) << endl;

    cout << rekursifFibonacci(n) << endl;
    return 0;
}

int fibonacci(int m1, int m2) {
    if (n == 1 or n == 2) return 1;
    else if (count == n - 1) return sum;
    else {
        sum = m1 + m2;
        count++;
        return fibonacci(m2, sum);
    }
}

int rekursifFibonacci(int n) {
    if (n == 1 or n == 2) return 1;

    return rekursifFibonacci(n - 1) + rekursifFibonacci(n - 2);
}