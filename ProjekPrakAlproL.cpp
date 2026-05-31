#include <iostream>
#include <fstream>

using namespace std;

struct pembeli {
    string nama;
    string id_tiket;
    string kategori;
    char baris;
    int kolom;
    int harga;
};

pembeli data_pembeli [100];
int jumlah_pembeli = 0;

void cetak_header() {
	system("cls");
	cout << "+============================================+\n"
		 << "|              VETERAN ORCHESTRA     	     |\n"
		 << "+============================================+\n";
}

//=========================================== menu ke-3 : data pembeli =================================================
void menu_data_pembeli () {
    int pilih;
    do {
        cetak_header ();
        cout << "+------------ Lihat Data Pembeli ------------+\n";
        cout << "1. Urutkan nama A-Z\n";
        cout << "2. Urutkan harga termahal\n";
        cout << "3. Urutkan harga termurah\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu (1-5): ";
        cin >> pilih;

        switch (pilih) {
            case 1 :
                break;
            case 2 :
                break;
            case 3 : 
                break;
            case 4 : 
                break;
            default :
                cout << "Menu tidak valid!\n";
                break;
        }
    }while (pilih != 4);
}

//======= output menu ke-3 : Data Pembeli
void output_data_pembeli () {
    cout << "+--------------- Data Pembeli ---------------+\n";
    if (data_pembeli == 0){
        cout << "Data masih kosong!";
    }

    for (int i = 0; i < jumlah_pembeli; i++){


    }
    
}

//======= menu ke 1 : sorting nama A-Z dari menu utama ke-3 : Data Pembeli
void sorting_nama () {

}

//======= menu ke 2 : sorting harga termahal dari menu utama ke-3 : Data Pembeli
void sorting_harga_termahal () {

}

//======= menu ke 2 : sorting harga termurah dari menu utama ke-3 : Data Pembeli
void sorting_harga_termurah () {

}


//=================================================== MENU UTAMA =========================================================
int main() {
    int pilih_menu;
    do {
        cetak_header();
        cout << "1. Lihat Layout Seat\n";
        cout << "2. Pesan Tiket\n";
        cout << "3. Data Pembeli\n";
        cout << "4. Cari Data\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu (1-5): ";
        cin >> pilih_menu;

        switch (pilih_menu) {
            case 1 :
                break;
            case 2 :
                break;
            case 3 : //punyakku
                menu_data_pembeli ();
                break;
            case 4 : //punyakku
                break;
            case 5 :
                cout << "Terima kasih sudah berkunjung ke Veteran Orchestra!\n";
                break;
            default :
                cout << "Menu tidak valid!\n";
                break;
        }
    }while (pilih_menu != 5);
    return 0;
}