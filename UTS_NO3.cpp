#include <iostream>
using namespace std;

int main ()
{
    int bilangan_n, hasil = 0; 

    system("CLS");
    cout << "n : "; cin >> bilangan_n;
    system("CLS");
    
    for (int i = 1; i <= bilangan_n; i += 2)
    {
        if (i % 2 == 1) //untuk melakukan seleksi apakah i merupakan bilangan ganjil atau tidak
        {
            hasil += (i*i); //rumus penjumlahan
        }

        if (i == 1) // seleksi dibawah untuk menampilkan penjumlahan kuadrat yang dilakukan
        {
            cout << i << "^2 ";
        }
        else 
        {
            cout << "+ " << i << "^2 ";
        }
    }

    cout <<  "\nn : " << bilangan_n << " = " << hasil; //menampilkan hasil akhir
}