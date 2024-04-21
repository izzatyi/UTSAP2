#include <iostream>
using namespace std;

int main ()
{
    int nomor_yang_dipilih;
    string pilihan;

    system("CLS");//untuk membersihkan layar agar tidak terlalu penuh jika user melakukan 271 T percobaan
    cout << "Daftar Calon Presiden : \n1. Soekarno \n2. Soeharto \n3. Bj.Habibie\n"; //tampilan awal, dibuat memanjang untuk meminimalisir banyak baris yang digunakan
    cout << "Masukan Pilihan Presiden Anda : "; cin >> nomor_yang_dipilih;

    switch (nomor_yang_dipilih) // menggunakan switch karena : 1. disuruh di soal; 2. Menghemat baris (daripada pake if)
    {
        case 1 : pilihan = ". Soekarno";
        case 2 : pilihan = ". Soeharto";
        case 3 : pilihan = ". Bj. Habibie";
        break;
    
    default: cout << "Nomor yang dimasukkan tidak valid"; // jika user menginput selain "1/2/3"
        break;
    }

    system("CLS");
    cout << "Pilihan anda telah disimpan, pilihan anda adalah nomor " << nomor_yang_dipilih << pilihan << endl ;
}
