#include <iostream>
using namespace std;

int main(){
    string nama; 
    float harga, diskonA, diskonB, diskonC, hargaA, hargaB, hargaC;

    cout << "=== Kalkulator Kasir Toko Buku ===" << endl;
    cout << "Masukan Nama               : "; cin >> nama;
    cout << "Masukan total belanja (Rp) : "; cin >> harga;
    cout << "" << endl;
    cout << "--- Ringkasan Pembayaran ---" << endl ;

    diskonA = (harga * 1);
    diskonB = (harga * 0.1);
    diskonC = (harga * 0.2);
    hargaA = (harga - diskonA);
    hargaB = (harga - diskonB);
    hargaC = (harga - diskonC);
   
    if (harga < 100000) {
    cout << "Diskon (0%)                : " << diskonA<< endl;
    cout << "Total Harga                : " << hargaA<< endl;
    }

    else if  (harga > 100000 && harga < 300000) {
    cout << "Diskon (10%)               : " << diskonB<< endl;
    cout << "Total Harga                : " << hargaB<< endl;
    }

    else {
    cout << "Diskon (20%)               : " << diskonC<< endl;
    cout << "Total Harga                : " << hargaC<< endl;      
    }

}