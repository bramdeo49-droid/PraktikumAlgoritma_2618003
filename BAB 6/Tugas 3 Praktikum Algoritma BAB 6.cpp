#include <iostream>
using namespace std;

int main() {
    int level = 1, jawaban;
    bool lanjut = true;

    cout << "===== 2618003 || Abraham Deo  =====" << endl;
    cout << "\n===== PROGRAM GAME MATEMATIKA =====" << endl;

    do {
        cout << "\nLevel " << level << endl;
        cout << "Berapa hasil dari " << level << " + "
             << level << " x 5? ";
        cin >> jawaban;

        int hasil = level + (level * 5);

        if (jawaban == hasil) {
            cout << "Benar! Naik level!" << endl;
            level++;
        } else {
            cout << "Game Over!" << endl;
            lanjut = false;
        }

    } while (level <= 6 && lanjut);

    if (level > 6) {
        cout << "\nSelamat! Kamu menyelesaikan semua level!" << endl;
    }

    return 0;
}

