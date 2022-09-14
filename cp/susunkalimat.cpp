#include <iostream>
using namespace std;

int main(){
  string s, c;
  int m;
   int n;
  bool can = true;

  cout << "string s = " ; cin >> s; fflush(stdin);
  cout << "string c = "; cin >> c; fflush(stdin);

  m = s.length();
  n = c.length();

  printf("len s = %d\n", m);
  printf("len c = %d\n", c);
  int i = 0, j = 0;
  while (can && c[i] != '\0') {
    while (can && s[j] != '\0') {
       if (s[j] != c[i]){
         can = false;
       } else {
         j++;
       }
    }
    i++;
  }


  if (can) cout << "Bisa" << endl;
  else cout << "Tidak Bisa" << endl;
  return 0;
}
