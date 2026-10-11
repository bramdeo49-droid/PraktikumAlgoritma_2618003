#include <iostream>
using namespace std;

int main() {
    int nilai1 = 03;
    int nilai2 = 65;

    cout << "Masukkan nilai pertama : " << nilai1 << endl;
    cout << "Masukkan nilai kedua   : " << nilai2 << endl;

    // Operator Bitwise AND
    if ((nilai1 > 60) & (nilai2 > 60)) {
        cout << "Status, Anda        : LULUS!" << endl;
    } else {
        cout << "Selamat, Anda        : TIDAK LULUS!" << endl;
    }

    return 0;
}
