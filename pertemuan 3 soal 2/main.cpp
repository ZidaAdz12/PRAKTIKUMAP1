#include <iostream>
using namespace std;

int main() {
  int m1, m2, m3;
  int maxm;

  cout << "Masukkan bilangan: ";
  cin >> m1 >> m2 >> m3;

  if (m1 >= m2 && m1 >= m3) {
    maxm = m1;
  } else if (m2 >= m1 && m2 >= m3) {
    maxm = m2;
  } else {
    maxm = m3;
  }

  cout << "Bilangan maximum adalah " << maxm << endl;
  return 0;
}
