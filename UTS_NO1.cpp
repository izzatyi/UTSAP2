#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    string nama, nilai_dalam_huruf, nim, mata_kuliah;
    char kom;
    float nilai;

    system("CLS");
    //dibawah ini saya memasukkan spasi agar output yang ditampilkan rapi
    //karena faktanya, menggunakan \t tidak membuat mereka sejajar nantinya, oleh karena itu saya menggunakan spasi
    cout << "Masukkan Nama        : "   ; getline(cin, nama); // menggunakan getline agar semua kata yang diinput bisa ditampilkan kembali
    cout << "Masukkan NIM         : "   ; getline(cin, nim);
    cout << "Masukkan Mata Kuliah : "   ; getline(cin, mata_kuliah);
    cout << "Masukkan KOM         : "   ; cin >> kom;
    cout << "Masukkan Nilai Tugas : "   ; cin >> nilai;

    //proses untuk mengubah dari nilai yang berbentuk angka kedalam huruf
    if (nilai >= 0 && nilai <= 40)
    {
        nilai_dalam_huruf = "E";
    }
    else if (nilai >= 41 && nilai <= 50)
    {
        nilai_dalam_huruf = "D";
    }
    else if  (nilai >= 51 && nilai <= 54)
    {
        nilai_dalam_huruf = "C-";
    }
    else if (nilai >= 55 && nilai <= 59)
    {
        nilai_dalam_huruf = "C";
    }
    else if (nilai >= 60 && nilai <= 64)
    {
        nilai_dalam_huruf = "C+";
    }
    else if (nilai >= 65 && nilai <= 69)
    {
        nilai_dalam_huruf = "B-";
    }
    else if (nilai >= 70 && nilai <= 74)
    {
        nilai_dalam_huruf = "B";
    }
    else if  (nilai >= 75 && nilai <=79)
    {
        nilai_dalam_huruf = "B+";
    }
    else if (nilai >= 80 && nilai <= 84)
    {
        nilai_dalam_huruf = "A-";
    }
    else if  (nilai >= 85 && nilai <= 100)
    {
        nilai_dalam_huruf = "A";
    }
    else 
    {
        nilai_dalam_huruf = "-"; //jika inputan yang diberikan lebih dari 100, maka program akan menampilkan "-"
    }

    system("CLS"); // dibawah ini untuk menampilkan hasil akhir seperti yang diminta
    cout << "Nama        : " << nama              << endl;
    cout << "NIM         : " << nim               << endl;
    cout << "KOM         : " << kom               << endl;
    cout << "Mata Kuliah : " << mata_kuliah       << endl;
    cout << "Nilai       : " << nilai_dalam_huruf << endl;
    
    return 0;
}
