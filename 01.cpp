#include <iostream>

int main() {
    int total = 0;
    int jumlah_angka = 0;
    int angka;

    while (true) {
        std::cout << "Masukkan angka (atau 999 untuk berhenti): ";
        std::cin >> angka;

        if (angka == 999) {
            break;
        }

        total += angka;
        jumlah_angka++;
    }

    if (jumlah_angka > 0) {
        double rata_rata = static_cast<double>(total) / jumlah_angka;
        std::cout << "Rata-rata dari angka yang diinputkan adalah: " << rata_rata << std::endl;
    } else {
        std::cout << "Tidak ada angka yang diinputkan." << std::endl;
    }

    return 0;
}
