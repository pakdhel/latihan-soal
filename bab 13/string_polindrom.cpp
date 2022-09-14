#include <iostream>
using namespace std;

bool string_polindrom(string a) {
    int i = 0;
    bool sama = true;
    while (sama && i < a.length()/2) {
        if (a[i] != a[a.length() - i - 1])
            sama = false;
        i++;
    }
    return sama;
}

int main(int argc, char const *argv[])
{
    if (string_polindrom("taat")) printf("Palindrom\n");
    else printf("Bukan polindrom\n");
    return 0;
}
