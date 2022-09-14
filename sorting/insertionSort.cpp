#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[5] = {82,34,0,67,77};
    int size = sizeof(a)/sizeof(*a);
    cout << size << endl;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 1; i < size; i++) {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    // for (int i = 1; i < size; i++) {
    //     int temp = a[i];
    //     int j = i - 1;
    //     while (j >= 0 && a[j] > temp) {
    //         if (temp < a[j]) {
    //             a[j + 1] = a[j];
    //             j--;
    //         }
    //         else {
    //             break;
    //         }
    //     }
    //     a[j + 1] = temp;
    // }

    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    

    return 0;
}
