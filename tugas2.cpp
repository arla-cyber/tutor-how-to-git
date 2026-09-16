#include <iostream>
using namespace std;

string nama;
int main(){
int uang, uangAwal, kodeAwal, harga, kembalian, change, limaRibu, seribu;

cout << "======= VENDING MACHINE AUTOMAT =======" << endl;
cout << "1. Air Mineral (Rp 4000)" << endl;
cout << "2. Teh Botol (Rp 6000)" << endl;
cout << "3. Kopi Susu (Rp 10000)" << endl;

cout << "" << endl;
cout << "Nama Pembeli                   : " ; cin >> nama;
cout << "Pilihan kode minuman (1-3)     : " ; cin >> kodeAwal;


cout << "Masukan uang Anda              : Rp "  ; cin >> uangAwal; 
cout << "" << endl;
cout << "------- DETAIL TRANSAKSI -------" << endl;

if (kodeAwal == 1) {
harga = 4000;
}

else if (kodeAwal == 2) {
harga = 6000;
}

else if (kodeAwal == 3) {
harga = 10000;
}

else {
cout << "Kode minuman tidak valid!" << endl;
return 0;
}


if (uangAwal < harga) {
cout << "Transaksi Gagal! "; 
cout << "Uang Anda kurang Rp " << harga - uangAwal << endl;
}


else {     
kembalian = uangAwal - harga;
limaRibu = kembalian / 5000;
change = (kembalian % 5000);
seribu = change / 1000;
 
cout << endl;
cout << "Transaksi Berhasil!" << endl;
cout << "" << endl;
cout << "Harga                          : Rp " << harga << endl;
cout << "Uang Anda                      : Rp " << uangAwal << endl; 
cout << "Kembalian                      : Rp " << kembalian << endl;
cout << "Lembar Rp 5.000                : " << limaRibu << endl;
cout << "Lembar Rp 1.000                : " << seribu << endl;
    }

}