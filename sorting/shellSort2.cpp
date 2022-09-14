#include <iostream>
#define N 10
using namespace std;

class Array {
    public:
    int a[N];

    void createArray() {
        for (int i = 0; i < N; i++) {
            Array::a[i] = rand() % 100;
        }
    }

    void displayArray() {
        cout << endl;
        for (int i = 0; i < N; i++) {
            cout << Array::a[i] << " ";
        }
    }

    void shellSort() {
        int gap = N/2;
        while (gap > 0) {
            for (int start = 0; start < gap; start++) {
                int i = start + gap;
                while (i < N) {
                    int j = i - gap;
                    int temp = a[i];
                    while (j >= 0 and a[j] > temp) {
                        a[j + gap] = a[j];
                        j = j - gap;
                    }
                    a[j + gap] = temp;
                    i = i + gap;
                }

            }
            gap = gap/2;
        }
    }
};

int main(int argc, char const *argv[])
{
    Array array;
    array.createArray();
    array.displayArray();
    array.shellSort();
    array.displayArray();
    return 0;
}
