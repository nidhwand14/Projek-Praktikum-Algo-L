#include <iostream>
#include <fstream>

using namespace std;

void data_pembeli () {
    do {
        cout << "+======= VETERAN ORCHESTRA =======+\n";
        cout << "1. Lihat Layout Seat\n";
        cout << "2. Pesan Tiket\n";
        cout << "3. Data Pembeli\n";
        cout << "4. Cari Data\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu (1-5): ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                break;
            case 2:
                break;
            case 3: //punyakku
                data_pembeli ();
                break;
            case 4: //punyakku
                cari_data ();
                break;
            case 6:
                cout << "Terima kasih sudah berkunjung ke Veteran Orchestra!\n";
                break;
            default:
                cout << "Menu tidak valid!\n";
                break;
        }
    }while (pilih != 6);
}

int main() {
    int pilih;

    do {
        cout << "+======= VETERAN ORCHESTRA =======+\n";
        cout << "1. Lihat Layout Seat\n";
        cout << "2. Pesan Tiket\n";
        cout << "3. Data Pembeli\n";
        cout << "4. Cari Data\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu (1-5): ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                break;
            case 2:
                break;
            case 3: //punyakku
                data_pembeli ();
                break;
            case 4: //punyakku
                cari_data ();
                break;
            case 6:
                cout << "Terima kasih sudah berkunjung ke Veteran Orchestra!\n";
                break;
            default:
                cout << "Menu tidak valid!\n";
                break;
        }
    }while (pilih != 6);
    return 0;
}