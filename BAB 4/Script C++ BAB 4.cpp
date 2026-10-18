
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nim;
    long long pendapatan, pajak, pajakAkhir;
    int tanggungan, tarif;

    cout << "===== PROGRAM PAJAK PENDAPATAN =====" << endl;

    cout << "Nama Anda : ";
    getline(cin, nama);

    cout << "NIM Anda  : ";
    getline(cin, nim);

    cout << "\nDATA PENDAPATAN" << endl;
    cout << "Pendapatan bulanan: Rp ";
    cin >> pendapatan;

    if (pendapatan < 0) {
        cout << "Input tidak valid!" << endl;
        return 0;
    }

    if (pendapatan < 5000000)
        tarif = 0;
    else if (pendapatan < 10000000)
        tarif = 5;
    else if (pendapatan < 20000000)
        tarif = 10;
    else
        tarif = 15;

    pajak = pendapatan * tarif / 100;

    cout << "Memiliki tanggungan (1=Ya, 0=Tidak): ";
    cin >> tanggungan;

    if (tanggungan != 0 && tanggungan != 1) {
        cout << "Input tanggungan tidak valid!" << endl;
        return 0;
    }

    pajakAkhir = pajak;

    if (tanggungan == 1)
        pajakAkhir -= 100000;

    if (pajakAkhir < 0)
        pajakAkhir = 0;

    cout << "Tarif pajak: " << tarif << "%" << endl;
    cout << "Pajak akhir: Rp " << pajakAkhir << endl;

    return 0;
}

