#include <iostream>
using namespace std;

int rekursif(int x) {
    int total;
    if (x == 0) return 1;
    else return x * rekursif(x - 1);

    
}

int main(int argc, char const *argv[])
{
    cout << rekursif(0) << endl;
    return 0;
}
