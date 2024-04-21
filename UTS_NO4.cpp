#include <iostream>
using namespace std;

int main()
{
    string umur; //di soal, nama variabelnya "a". Supaya lebih mudah dipahami, saya ganti variabel menjadi umur untuk menampung inputan dari user

    a : //label untuk kembali ke permainan jika user salah menebak umur
    cout << "Tebak Umur Saya : "; 
    cin >> umur;
    system("CLS"); //untuk membersihkan layar agar tidak terlalu penuh jika user melakukan 271 T percobaan

    if (umur == "20")
    {
        cout << umur <<  "\nJawaban anda benar!!\n";
    }
    else 
    {
        cout << umur << "\nJawaban anda salah. Coba lagi..\n";
        goto a;
    }

    cout << "Program Selesai!!"; //bisa diletak dalam if (jika jawaban benar) ataupun diluar if
    return 0; //boleh pakai return 0 atau getchar(). Boleh juga ga pake keduanya.
}


