#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    float temp;
    bool flag;
    cin >> x;

    if (x > 3) {
        for (int i = 2; i <= sqrt(x); i++) {
            temp = sqrt(x);
            for (int j = i; j <= sqrt(temp); j++) {
                if (x % j == 0) {
                    flag = false;
                    break;
                } else {
                    flag = true;
                }
            }
            if (x % i == 0) {
                flag = false; 
                break;
            } else {
                flag = true;
            }
        }
    } else if (x == 2 or x == 3) flag = true;
    else flag = false;
    
    if (flag) cout << "Prima" << endl;
    else cout << "Bukan prima" << endl;
    return 0;
}
