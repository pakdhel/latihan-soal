#include <iostream>
#include <string>
using namespace std;

void reverse(string a) {
    if (a.length() == 1) cout << a;
    else {
        char t = a[0];
        a.erase(0,1);
        reverse(a);
        cout << t;
    }
}

int main(int argc, char const *argv[])
{
    // string a = "abcd";
    // cout << a << endl;
    // a.erase(0,1);
    // cout << a << endl;

    reverse("URAB");
    cout << endl;
    reverse("jancok");

    return 0;
}
