#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct datapembeli {
	string nama;
	string idtiket;
	string kategori;
	char baris;
	int kolom;
	int harga;
	};
	
datapembeli kursi[50];
int jumlahpembeli = 0;

char seat[5][10];

//========================== STRING UNTUK FILE ============================
string to_underscore(string text) {
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == ' ') {
			text[i] = '_';
		}
	}
	return text;
}

string to_space(string text) {
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == '_') {
			text[i] = ' ';
		}
	}
	return text;
}


int hargatiket(char baris) {
	if(baris == 'A') return 750000;
	else if(baris == 'B' || baris == 'C') return 500000;
	else return 200000;
	}
	
string kategoriseat(char baris) {
	if(baris == 'A') return "CAT 1";
	else if(baris == 'B' || baris == 'C') return "CAT 2";
	else return "CAT 3";
	}

void savefile() {
    ofstream file("tiket.txt");

    for(int i = 0; i < jumlahpembeli; i++) {
        file << tiket[i].nama << " "
             << tiket[i].idTiket << " "
             << tiket[i].kategori << " "
             << tiket[i].baris << " "
             << tiket[i].kolom << " "
             << tiket[i].harga << endl;
    }

    file.close();
}

void pesantiket () {
	pembeli *p = &tiket[jumlahpembeli];
	
	}

void layout() {
	
	}
	
void rekursif () {

}


//================================== Login Admin untuk Menu ke-3 (Tampilkan Data Pembeli) dan ke-4 (Cari Data) ===================================
bool login() {
    string username, password;
			
	cout	<< "===== LOGIN ADMIN ====="	<< endl;
	cout	<< "Username : ";
	cin		>> username;
	cout	<< "Password : ";
	cin		>> password;
			
	if(username == "nina" && password == "1431") {
		system("cls");
		cout << "Login berhasil!"	<< endl;
		return true;
		}
		
	else {
		system("cls");
		cout << "!!!Hanya Admin yang dapat Mengakses Data Pembeli!!!"	<< endl;
		return false;
		}
	}


/*======================================================== menu ke-3 : Tampilkan Data Pembeli =================================================
======= output menu ke-3 : Tampilkan Data Pembeli*/
void output_tampilkan_data_pembeli () {
    cout << "+--------------- Data Pembeli ---------------+\n";
    if (jumlahpembeli == 0){
        cout << "Data masih kosong!"<< endl;
    }

    for (int i = 0; i < jumlahpembeli; i++){
		datapembeli *p = &kursi[i];
		cout << "Nama : " << p -> nama << endl;
		cout << "ID Tiket : " << p -> idtiket << endl;
		cout << "Seat : " << p -> baris <<  p -> kolom  << endl;
		cout << "Kategori : " << p -> kategori << endl;
		cout << "Harga : " << p -> harga << endl;
    }
    
}

//======= menu ke 1 : sorting nama A-Z dari menu utama ke-3 : Tampilkan Data Pembeli
void sorting_nama () {
	for (int i = 0; i < jumlahpembeli - 1; i++){
		for (int j = 0; j < jumlahpembeli - i - 1; j++) {
			if (kursi[j].nama > kursi[j+1].nama) {
				datapembeli temp = kursi[j];
				kursi[j] = kursi[j+1];
				kursi[j+1] = temp;
			}
		}
	}
}

//======= menu ke 2 : sorting harga termahal dari menu utama ke-3 : Tampilkan Data Pembeli
void sorting_harga_termahal () {
	for (int i = 0; i < jumlahpembeli - 1; i++){
		for (int j = 0; j < jumlahpembeli - i - 1; j++) {
			if (kursi[j].harga < kursi[j+1].harga) {
				datapembeli temp = kursi[j];
				kursi[j] = kursi[j+1];
				kursi[j+1] = temp;
			}
		}
	}
}

//======= menu ke 2 : sorting harga termurah dari menu utama ke-3 : Tampilkan Data Pembeli
void sorting_harga_termurah () {
	for (int i = 0; i < jumlahpembeli - 1; i++){
		for (int j = 0; j < jumlahpembeli - i - 1; j++) {
			if (kursi[j].harga > kursi[j+1].harga) {
				datapembeli temp = kursi[j];
				kursi[j] = kursi[j+1];
				kursi[j+1] = temp;
			}
		}
	}
}

//====== SubMenu dari menu ke-3 (Tampilkan Data Pembeli)
void menu_tampilkan_data_pembeli () {
    int pilih;
    do {
        cout << "+------------ Lihat Data Pembeli ------------+\n";
        cout << "1. Urutkan nama A-Z\n";
        cout << "2. Urutkan harga termahal\n";
        cout << "3. Urutkan harga termurah\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu (1-5): ";
        cin >> pilih;

        switch (pilih) {
            case 1 :
				sorting_nama ();
				output_tampilkan_data_pembeli ();
                break;
            case 2 :
				sorting_harga_termahal ();
				output_tampilkan_data_pembeli ();
                break;
            case 3 : 
				sorting_harga_termurah ();
				output_tampilkan_data_pembeli ();
                break;
            case 4 : 
                break;
            default :
                cout << "Menu tidak valid!\n";
                break;
        }
    } while (pilih != 4);
}


//============================================================= menu ke-4 : Cari Data ===========================================================
void cari_data (){
	string cari;
	bool ketemu = false;

	cout << "\n===== Cari Data ====="	<< endl;

	cin.ignore();
	cout << "Masukkan nama atau ID tiket : ";
	getline(cin, cari);

	for (int i = 0; i < jumlahpembeli; i++) {
		if (kursi[i].nama == cari || kursi[i].idtiket == cari) {
			cout << "Data ditemukan!" << endl;
			cout << "Nama : " << kursi[i].nama << endl;
			cout << "ID Tiket : " << kursi[i].idtiket << endl;
			cout << "Seat : " << kursi[i].baris << kursi[i].kolom << endl;
			cout << "Kategori : " << kursi[i].kategori << endl;
			cout << "Harga : " << kursi[i].harga << endl;

			ketemu = true;
			break;
		}
	}
	if (!ketemu) {
		cout << "Data tidak ditemukan!" << endl;
	}
}


//================================================================= MENU UTAMA =================================================================
int main () {
	int pilih;
	
	do {
		cout	<< "===== VETERAN ORCHESTRA ====="	<< endl;
		cout	<< "1. Lihat Layout Seat"			<< endl;
		cout	<< "2. Pesan Tiket"					<< endl;
		cout	<< "3. Tampilkan Data Pembeli"		<< endl;	//sekalian sorting (tampilkan seluruh data berdasarkan idtiket, tampilkan tiap catnya)-a
		cout	<< "4. Cari Data"					<< endl;	//cari berdasarkan idtiket, setelah itu muncul e-ticket-a
		cout	<< "5. Exit"						<< endl;
		
		cout	<< "Pilih : ";
		cin		>> pilih;
		
		switch (pilih) {
			
			case 1:
				break;
			case 2:
				break;
			case 3:
				if(login()) {
					menu_tampilkan_data_pembeli();
				}
				system("pause");
				system("cls");
				break;
			case 4:
				if(login()) {
					cari_data();
				}
				system("pause");
				system("cls");
				break;
			case 5:
				break;
			default:
				cout	<< "Menu Tidak Ada"	<< endl;
				system("pause");
			
		}
	}while (pilih != 5);
	return 0;
}
