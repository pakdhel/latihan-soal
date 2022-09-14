#include <iostream>

using namespace std;

void hanoi(int n, char A, char C, char B);
int polinom1(int X, int koef, int i, int derajat);
int polinom2(int);
int polinomChebisev(int);
int eksponen(int a, int b);
int euclidean(int x, int y);
int faktorial(int x);
int rekursifFibonacci(int n);
void reverse(string a);



int x;
int main(int argc, char const *argv[])
{
    cout << polinomChebisev(4) << endl;

    cout << "Mengevaluasi polinom" << endl;
    cout << "p(x) = a + a1*x + a2*x + a3*x " << endl;
    cout << "x : "; cin >> x;
    cout << polinom2(0) << endl;

    int derajat, koef, X;
    cout << "\nMengevaluasi polinom1 berderajat n" << endl;
    cout << "Pn(x) = A0 + A1*X + A2*X^2 + ... + An*X^n" << endl;
    cout << "Pn(x) = A0 + 2 * A0*X + 2 * A0*X^2 + ... + 2 * A0*X^n" << endl;
    cout << "n : "; cin >> derajat;
    cout << "koefisien : "; cin >> koef;
    cout << "variabel X : "; cin >> X;
    int hasil = polinom1(X, koef, 0, derajat);
    cout << hasil << endl;
    return 0;
}

int a[4] = {3,2,4,8};
int n = sizeof(a)/sizeof(a[0]);

int polinom1(int X, int koef, int i, int derajat) {
    if (i == derajat) return koef;
    return koef + X * polinom1(X, koef * 2, i + 1, derajat);
}


int polinom2(int i) {
    if (i == n - 1) return a[n - 1];

    return a[i] + x * polinom2(i + 1);
}

int polinomChebisev(int a) {
/*          3             , a = 0
    f(a) = 
            2f(a - 1) + 4 , a > 0
*/
    
    if (a == 0) return 3;
    return 2 * polinomChebisev(a - 1) + 4;
}

int eksponen(int a, int b) {
    if (b == 0) return 1;
    else return a * eksponen(a, b - 1);
}

int euclidean(int x, int y) {
    int r;
    if (y == 0) return x;
    else {
        r = x % y;
        return euclidean(y, r);
    }
}

int faktorial(int x) {
    int total;
    if (x == 0) return 1;
    else return x * faktorial(x - 1);   
}

int rekursifFibonacci(int n) {
    if (n == 1 or n == 2) return 1;

    return rekursifFibonacci(n - 1) + rekursifFibonacci(n - 2);
}

void reverse(string a) {
    if (a.length() == 1) cout << a;
    else {
        char t = a[0];
        a.erase(0,1);
        reverse(a);
        cout << t;
    }
}

void hanoi(int n, char A, char C, char B) {
    if (n > 0) {
        hanoi(n - 1, A, B, C);
        cout << "Pindahkan satu disk dari " << A << " ke " << C << endl;
        hanoi(n - 1, B, C, A);
    }
}