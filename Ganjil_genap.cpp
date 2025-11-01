#include <iostream>
using namespace std;

int main () {
  int bilangan;

  cout << "Masukkan sebuah bilangan: ";
  cin >> bilangan; 
  
  if (bilangan % 2 == 0)
    cout << "Bilangan tersbeut adalah bilangan GENAP" << endl;
  else
    cout << "Bilangan tersebut adalah bilangan GANJIL" << endl;

return 0;
}