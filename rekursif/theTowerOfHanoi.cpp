#include <iostream>
using namespace std;

void hanoi(int n, char A, char C, char B);
void hanoiT(int n, char A, char C, char B); 

int main(int argc, char const *argv[])
{
    char A = 'A', B = 'B', C = 'C';
    hanoi(3, A, C, B);
    return 0;
}

void hanoi(int n, char A, char C, char B) {
    if (n > 0) {
        hanoi(n - 1, A, B, C);
        cout << "Pindahkan satu disk dari " << A << " ke " << C << endl;
        hanoi(n - 1, B, C, A);
    }
}

void hanoiT(int n, char A, char C, char B) {
    if (n > 0) {
        hanoi(n - 1, A, B, C);
        cout << "Pindahkan satu disk dari " << A << " ke " << C << endl;
        hanoi(n - 1, B, C, A);
    }
}
