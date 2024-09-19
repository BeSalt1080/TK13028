#include <iostream>
#include <string>
using namespace std;

void faktorial()
{
    int nomor, fak = 1;
    cout << "Masukkan nilai yang ingin difaktorialkan: ";
    cin >> nomor;
    for (int i = nomor; i >= 1; i--)
    {
        fak = fak * i;
    }
    cout << "Faktorial dari " << nomor << " adalah " << fak << endl;
}
void penambahan()
{
    int nomor1, nomor2;
    cout << "Masukkan nilai pertama yang ingin ditambahkan: ";
    cin >> nomor1;
    cout << "Masukkan nilai kedua yang ingin ditambahkan: ";
    cin >> nomor2;
    cout << "Hasil dari " << nomor1 << " + " << nomor2 << " = " << nomor1 + nomor2;
}

void ratarata()
{
    int nomor1, nomor2, nomor3;
    cout << "Masukkan nilai pertama yang ingin dirata-ratakan: ";
    cin >> nomor1;
    cout << "Masukkan nilai kedua yang ingin dirata-ratakan: ";
    cin >> nomor2;
    cout << "Masukkan nilai ketiga yang ingin dirata-ratakan: ";
    cin >> nomor3;
    cout << "Rata - rata dari " << nomor1 << ", " << nomor2 << ", " << nomor3 << " adalah " << (nomor1 + nomor2 + nomor3) / 3;
}

bool login(string username, string password)
{
    if (username == "shin" && password == "hehe")
        return true;
    return false;
}

void pilihan()
{
    cout << "Pilhan menu" << endl
         << "1.Faktorial, dari input 1 nilai" << endl
         << "2.Penambahan, dari input 2 nilai" << endl
         << "3.Rata - rata, dari input 3 nilai" << endl;
    int pilihan;
    cin >> pilihan;
    switch (pilihan)
    {
    case 1:
        faktorial();
        break;
    case 2:
        penambahan();
        break;
    case 3:
        ratarata();
        break;
    default:
        cout << "Pilihan tidak dikenal";
        break;
    }
}

int main()
{
    string username, password;
    cout << "Masukkan username anda: ";
    getline(cin, username);
    cout << "Masukkan password anda: ";
    getline(cin, password);
    if (login(username, password))
    {
        cout << "Selamat datang " << username << "!" << endl;
        pilihan();
    }
    else
    {
        cout << "Username atau Password salah";
        return 1;
    }
    cout << "Terimakasih telah menggunakan aplikasi kami";
    return 0;
}