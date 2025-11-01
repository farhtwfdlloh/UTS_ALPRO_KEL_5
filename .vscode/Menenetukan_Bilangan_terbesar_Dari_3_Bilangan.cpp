#include <iostream>
using namespace std;

int main() {
    int A, B, C, terbesar;
    
    cout << "Masukkan bilangan pertama: ";
    cin >> A;
    cout << "Masukkan bilangan kedua: ";
    cin >> B;
    cout << "Masukkan bilangan ketiga: ";
    cin >> C;
    
    if (A > B && A > C)
        terbesar = A;
    else if (B > A && B > C)
        terbesar = B;
    else
        terbesar = C;
    
    cout << "Bilangan terbesar adalah: " << terbesar << endl;
    
    return 0;  
}