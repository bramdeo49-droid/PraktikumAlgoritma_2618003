#include <iostream>
using namespace std;

int main() {
    int angka, i = 1, total = 0;

    cout << "##              2618003       ##" << endl;
    cout << "## Program C++ Penjumlahan Deret ##" << endl;
    cout << "========================================" << endl;

    cout << "\nJumlah deret yang diinginkan: ";
    cin >> angka;

    cout << endl;

    while (i <= angka) {
        cout << i;

        total = total + i;

        if (i < angka) {
            cout << " + ";
        }

        i++;
    }

    cout << " = " << total << endl;

    return 0;
}

