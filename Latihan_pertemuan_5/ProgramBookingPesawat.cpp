#include <iostream>

using namespace std;

const int JUMLAH_BARIS = 15;
const int JUMLAH_KURSI = 6;
int mulai;
int akhir;

char kursi[JUMLAH_BARIS][JUMLAH_KURSI] =
    {
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', '*', '*', '*'},
        {'*', '*', '*', '*', '*', '*'}};

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

void printKursi(char kelas)
{
    if (kelas == 'U' || kelas == 'u')
    {
        mulai = 1;
        akhir = 2;
        cout << "========= Kelas Utama ========" << endl;
    }
    else if (kelas == 'B' || kelas == 'b')
    {
        mulai = 3;
        akhir = 5;
        cout << "========= Kelas Bisnis ========" << endl;
    }
    else if (kelas == 'E' || kelas == 'e')
    {
        mulai = 6;
        akhir = 15;
        cout << "========= Kelas Ekonomi ========" << endl;
    }
    for (int i = mulai; i <= akhir; i++)
    {
        cout << "Baris " << i << " ";
        for (int j = 0; j < JUMLAH_KURSI; j++)
        {
            cout << kursi[i - 1][j] << " ";
        }
        cout << endl;
    }
}

void pesanKursi(char kelas)
{
    int baris, kolom;

    while (true)
    {
        clearConsole();
        printKursi(kelas);
        cout << "Masukkan nomor baris (" << mulai << "-" << akhir << ") atau '0' untuk batal: ";
        cin >> baris;
        if (baris == 0)
        {
            return;
        }
        if (baris < mulai || baris > akhir)
        {
            cout << "Baris tidak valid" << endl;
            pause();
        }
        else
        {
            while (true)
            {
                clearConsole();
                printKursi(kelas);
                cout << "Baris yang dipilih: " << baris << endl;
                cout << "Masukkan nomor kursi (1-6) atau '0' untuk batal: ";
                cin >> kolom;
                if (kolom == 0)
                {
                    return;
                }
                if (kolom < 1 || kolom > 6)
                {
                    cout << "Kolom tidak valid" << endl;
                    pause();
                }
                else
                {
                    if (kursi[baris - 1][kolom - 1] == 'X')
                    {
                        cout << "Kursi sudah dibooking" << endl;
                        pause();
                        return;
                    }
                    else
                    {
                        kursi[baris - 1][kolom - 1] = 'X';
                        cout << "Kursi berhasil dibooking" << endl;
                        pause();
                        return;
                    }
                }
            }
        }
    }
}

int main()
{
    char kelas;
    printKursi('u');
    printKursi('b');
    printKursi('e');
    while (true)
    {
        cout << "Masukkan kelas (U/B/E) atau 'q' untuk keluar: ";
        cin >> kelas;
        clearConsole();
        if (kelas == 'q' || kelas == 'Q')
        {
            break;
        }
        else if (kelas == 'U' || kelas == 'u' || kelas == 'B' || kelas == 'b' || kelas == 'E' || kelas == 'e')
        {
            pesanKursi(kelas);
        }
        else
        {
            cout << "Kelas tidak valid" << endl;
            pause();
        }
        clearConsole();
        printKursi('u');
        printKursi('b');
        printKursi('e');
    }
    return 0;
}