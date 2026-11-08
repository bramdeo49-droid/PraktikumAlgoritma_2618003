#include <iostream>
using namespace std;

int main() {
    int angka;
    long long faktorial = 1;
    cout << "## Abraham Deo - 2618003 ##" << endl;
    cout << "==================================" << endl;

    cout << "## Program C++ Hitung Faktorial ##" << endl;
    cout << "==================================" << endl;

    cout << "\nInput angka: ";
    cin >> angka;

    cout << angka << "! = ";

    for (int i = 1; i <= angka; i++) {
        faktorial = faktorial * i;

        cout << i;

        if (i < angka) {
            cout << " * ";
        }
    }

    cout << " = " << faktorial << endl;

    return 0;
}

