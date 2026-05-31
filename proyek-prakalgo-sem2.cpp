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
int jumlah = 0;

char seat[5][10];

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

    for(int i = 0; i < jumlah; i++) {
        file << tiket[i].nama << " "
             << tiket[i].idTiket << " "
             << tiket[i].kategori << " "
             << tiket[i].baris << " "
             << tiket[i].kolom << " "
             << tiket[i].harga << endl;
    }

    file.close();
}

void pesantiket  {
	pembeli *p = &tiket[jumlah];
	
	}

void layout() {
	
	}
	
void rekursif
	
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
				(); //disini taruh void tampilkan data pembeli
				}
			system("pause");
			system("cls");
			break;
			
			case 4:
			
			break;
			
			case 5:
			
			break;
			
			default:
			cout	<< "Menu Tidak Ada"	<< endl;
			system("pause");
			}
		} while (pilih != 5);
		return 0;
	}
