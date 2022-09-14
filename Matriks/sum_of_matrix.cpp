#include <iostream>
#include <array>
using namespace std;

void sumMatrix(array<array<int, 3>, 3>m1, array<array<int, 3>, 3>m2, array < array <int, 3>, 3>m3) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void printElemen(array < array <int, 3>, 3>arr3) {
    for (int i = 0; i < 3; i++)
    {
        cout << "[";
        for (int j = 0; j < 3; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << "]" << endl;
    }
}

void sum_of_matrix(int m1[][3], int m2[][3], int m3[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void print_element_matrix(int m[][3]) {
    for (int i = 0; i < 3; i++)
    {
        cout << "[";
        for (int j = 0; j < 3; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "]" << endl;
    } 
}

int main(int argc, char const *argv[])
{
    int m1[3][3] = 
    {
        {1,3,5},
        {18,31,1},
        {2,4,15}
    };
    
    int m2[3][3] = 
    {
        {-6,9,8},
        {3,2,1},
        {4,5,-7}
    };
    int m3[3][3];

    array < array < int, 3 >, 3 >arr1 = {1,3,5,18,31,1,2,4,15};
    array < array < int, 3 >, 3 >arr2 = {-6,9,8,3,2,1,4,5,-7};
    array < array < int, 3 >, 3 >arr3;

    // sum_of_matrix(m1, m2, m3);
    // print_element_matrix(m3);
    sumMatrix(arr1,arr2,arr3);
    printElemen(arr3);
    return 0;
}
