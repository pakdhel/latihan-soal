#include <iostream>
#define N 13
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
        int step = N/2;
        while (step > 0) {
            for (int start = 0; start < step; start++) {
                int i = step + start;
                while (i < N) {
                    int j = i - step;
                    int temp = Array::a[i];
                    while (j >= 0 and Array::a[j] > temp) {
                        Array::a[j + step] = Array::a[j];
                        j = j - step;
                    }
                    Array::a[j + step] = temp;
                    i = i + step;
                }
            }
            step = step / 2;
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
