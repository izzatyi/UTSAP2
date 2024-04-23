#include <iostream>
using namespace std; // di soal hanya 'using std' seharusnya seperti disamping'

int main()
{
    //system("CLS"); disini saya tdk memanggil clearscreen di awal.

    string umur; //di soal, nama variabelnya "a". Supaya lebih mudah dipahami, saya ganti variabel menjadi umur untuk menampung inputan dari user

    a : //label untuk kembali ke permainan jika user salah menebak umur
    cout << "Tebak Umur Saya : "; //di soal ga ada titik koma (';')
    cin >> umur; //di soal, tanda nya terbalik '<<' seharusnya '>>'
    system("CLS"); //untuk membersihkan layar agar tidak terlalu penuh jika user melakukan 271 T percobaan

    if (umur == "20") //karena tipe data umur berupa string, maka harus pake petik dua (" ")
    {
        cout << umur <<  "\nJawaban anda benar!!\n";
    }
    else //lebih efektif menggunakan else daripada else if
    {
        cout << umur << "\nJawaban anda salah. Coba lagi..\n"; //di soal tidak ada titik koma (;) dan 'endl' saya ubah menjadi '\n'
        goto a;
    }

    cout << "Program Selesai!!"; //bisa diletak dalam if (jika jawaban benar) ataupun diluar if
    return 0; //boleh pakai return 0 atau getchar(). Boleh juga ga pake keduanya.
}


