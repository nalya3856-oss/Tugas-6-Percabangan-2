#include <iostream>
using namespace std;

int main() {
    double totalBelanja;
    char statusMember;

    // Input dari pengguna
    cout << "Masukkan total belanja (Rp): ";
    cin >> totalBelanja;
    cout << "Apakah memiliki kartu member? (y/t): ";
    cin >> statusMember;

    // Nested IF (If di dalam If)
    if (statusMember == 'y' || statusMember == 'Y') {
        // Kondisi jika member
        if (totalBelanja >= 500000) {
            cout << "Selamat! Anda mendapatkan diskon 20%." << endl;
        } else {
            cout << "Selamat! Anda mendapatkan diskon 10%." << endl;
        }
    } else {
        // Kondisi jika bukan member
        if (totalBelanja >= 500000) {
            cout << "Selamat! Anda mendapatkan diskon 5%." << endl;
        } else {
            cout << "Maaf, Anda tidak mendapatkan diskon." << endl;
        }
    }

    return 0;
}
