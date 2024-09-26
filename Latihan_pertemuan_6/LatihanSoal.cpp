#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

void clearConsole()
{
#ifdef _WIN32
    system("cls");
#elif defined(__APPLE__) || defined(__linux__)
    system("clear");
#endif
}

void pause()
{
    cout << "Tekan ENTER untuk melanjutkan...";
    cin.ignore();
    cin.get();
}

struct Rekening
{
    string nama;
    int saldo;
    int nomor_rekening;
};

void tambah_saldo(vector<Rekening> &rekening, int index)
{
    int nominal;
    cout << "Masukkan jumlah saldo yang ingin ditambahkan: ";
    cin >> nominal;
    rekening[index].saldo += nominal;
    cout << "Saldo sekarang: " << rekening[index].saldo << endl;
    pause();
    clearConsole();
}

void tambah_rekening(vector<Rekening> &rekening)
{
    cout << "============= Tambah Rekening =============" << endl;
    string nama_input;
    int i;
    bool found = false;
    cout << "Masukkan nama: ";
    cin.ignore();
    getline(cin, nama_input);
    for (i = 0; i < rekening.size(); i++)
    {
        if (rekening[i].nama == nama_input)
        {
            found = true;
            break;
        }
    }
    if (!found)
    {
        Rekening temp;
        temp.nama = nama_input;
        cout << "Masukkan nomor rekening: ";
        cin >> temp.nomor_rekening;
        cout << "Masukkan saldo: ";
        cin >> temp.saldo;
        rekening.push_back(temp);
        cout << "Rekening " << temp.nama << " berhasil dibuat" << endl;
        pause();
        clearConsole();
    }
    else
    {
        clearConsole();
        cout << "=======================================" << endl;
        cout << "Rekening " << nama_input << endl;
        cout << "Nomor rekening: " << rekening[i].nomor_rekening << endl;
        cout << "Saldo: " << rekening[i].saldo << endl;
        cout << "=======================================" << endl;
        tambah_saldo(rekening, i);
    }
}

void cetak_rekening(vector<Rekening> rekening)
{
    cout << "+---------------+----------------+------------+" << endl;
    cout << "| Nama          | Nomor Rekening | Saldo      |" << endl;
    cout << "+---------------+----------------+------------+" << endl;
    for (int i = 0; i < rekening.size(); i++)
    {
        cout << "| " << setw(12) << left << rekening[i].nama;
        cout << "| " << setw(16) << left << rekening[i].nomor_rekening;
        cout << "| " << setw(11) << left << rekening[i].saldo;
        cout << "|" << endl;
    }
    cout << "+---------------+----------------+------------+" << endl;
    pause();
    clearConsole();
}

int main()
{
    vector<Rekening> rekening;
    int pilihan;
    do
    {
        cout << "================ Menu ================" << endl;
        cout << "1. Tambah rekening" << endl;
        cout << "2. Lihat rekening" << endl;
        cout << "3. Keluar" << endl;
        cout << "=======================================" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;
        clearConsole();

        switch (pilihan)
        {
        case 1:
            tambah_rekening(rekening);
            break;
        case 2:
            cetak_rekening(rekening);
            break;
        case 3:
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
            pause();
            clearConsole();
        }
    } while (pilihan != 3);

    return 0;
}
