#include <iostream>
using namespace std;

int rekursif(int a, int b) {
    if (b == 0) return 1;
    else return a * rekursif(a, b - 1);
}

int main(int argc, char const *argv[])
{
    cout << rekursif(2,5) << endl;
    
    return 0;
}
