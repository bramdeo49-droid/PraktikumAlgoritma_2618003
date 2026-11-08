#include <iostream>
using namespace std;

int main() {
    int n, hasil;

    cout << "===== 2618003 || Abraham Deo =====" << endl;

    cout << "\nMasukkan jumlah angka: ";
    cin >> n;

    cout << "\n=== Deret Campur Logika ===" << endl;

    for (int i = 1; i <= n; i++) {

        if (i % 2 == 0) {
            hasil = i * 2;
        }
        else if (i % 3 == 0) {
            hasil = i + 3;
        }
        else {
            hasil = i;
        }

        cout << hasil << " ";
    }

    cout << endl;

    return 0;
}

