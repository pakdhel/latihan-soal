#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    long int a;
    int aux = x;
    int digit = 0;
    int total = 0;
    while (aux > 0) {
        digit = aux % 10;
        total = total * 10 + digit;
        aux = aux / 10;
    }
    if (x == total) return true;
    else return false;
}

int main(int argc, char const *argv[])
{
    int a = 12320;
    if (isPalindrome(a)) printf("palindrome");
    else printf("not palindrom");
    
    return 0;
}
