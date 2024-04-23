#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    string nama, nilai_dalam_huruf, dosen_pa,  nim, mata_kuliah;
    char kom;
    int hadir;
    float tugas, uts, uas, quiz, nilai_akhir;

    system("CLS");
    //dibawah ini saya memasukkan spasi agar output yang ditampilkan rapi
    //karena faktanya, menggunakan \t tidak membuat mereka sejajar nantinya, oleh karena itu saya menggunakan spasi
    cout << "Masukkan Nama                   : "; getline(cin, nama); // menggunakan getline agar semua kata yang diinput bisa ditampilkan kembali
    cout << "Masukkan NIM                    : "; getline(cin, nim);
    cout << "Masukkan Nama Dosen PA          : "; getline(cin, dosen_pa);
    cout << "Masukkan Mata Kuliah            : "; getline(cin, mata_kuliah);    
    cout << "Masukkan KOM                    : "; cin >> kom;
    cout << "Masukkan Jumlah Kehadiran (/14) : "; cin >> hadir;
    cout << "Masukkan Nilai Tugas            : "; cin >> tugas;
    cout << "Masukkan Nilai Quiz             : "; cin >> quiz;
    cout << "Masukkan Nilai UTS              : "; cin >> uts;
    cout << "Masukkan Nilai UAS              : "; cin >> uas;
    
    nilai_akhir = (0.15 * hadir) + (0.3 * uas) + (0.3 * uts) + (0.25 * tugas); //rumus untuk nilai akhir
    
    //proses untuk mengubah dari nilai yang berbentuk angka kedalam huruf
    if (nilai_akhir >= 0 && nilai_akhir <= 40)
    {
        nilai_dalam_huruf = "E";
    }
    else if (nilai_akhir >= 41 && nilai_akhir <= 50)
    {
        nilai_dalam_huruf = "D";
    }
    else if  (nilai_akhir >= 51 && nilai_akhir <= 54)
    {
        nilai_dalam_huruf = "C-";
    }
    else if (nilai_akhir >= 55 && nilai_akhir <= 59)
    {
        nilai_dalam_huruf = "C";
    }
    else if (nilai_akhir >= 60 && nilai_akhir <= 64)
    {
        nilai_dalam_huruf = "C+";
    }
    else if (nilai_akhir >= 65 && nilai_akhir <= 69)
    {
        nilai_dalam_huruf = "B-";
    }
    else if (nilai_akhir >= 70 && nilai_akhir <= 74)
    {
        nilai_dalam_huruf = "B";
    }
    else if  (nilai_akhir >= 75 && nilai_akhir <= 80)
    {
        nilai_dalam_huruf = "B+";
    }
    else if  (nilai_akhir >= 81 && nilai_akhir <= 100)
    {
        nilai_dalam_huruf = "A";
    }
    else if (nilai_akhir >= 101)
    {
        nilai_dalam_huruf = "unvalid"; //jika inputan yang diberikan lebih dari 100, maka program akan menampilkan "-"
    }

    system("CLS"); // dibawah ini untuk menampilkan hasil akhir seperti yang diminta
    cout << "Nama        : " << nama              << endl;
    cout << "NIM         : " << nim               << endl;
    cout << "KOM         : " << kom               << endl;
    cout << "Dosen PA    : " << dosen_pa          << endl;
    cout << "Mata Kuliah : " << mata_kuliah       << endl;
    cout << "Predikat    : " << nilai_dalam_huruf << endl;
    cout << "Nilai Akhir : " << nilai_akhir;
    return 0;
}
