#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nama[20];
    int a, n;
    float nilai[10], jumlah = 0, avg;

    cout << "Ketikkan jumlah mahasiswa: ";
    cin >> n;

    for (a = 0; a < n; a++)
    {
        cout << "Ketikkan nama mahasiswa ke " << a + 1 << ": ";
        getline(cin, nama[a]);
        cout << "Ketikkan nilai mahasiswa ke " << a + 1 << ": ";
        cin >> nilai[a];
        jumlah = jumlah + nilai[a];
    }
    avg = jumlah / n;
    cout << "Rata - rata = " << avg << endl
         << endl;

    cout << "Daftar mahasiswa yang nilainya lebih tinggi dari nlai rata" << endl;

    for (a = 0; a < n; a++)
    {
        if (nilai[a] > avg)
        {
            cout << "Nama: " << nama[a] << endl;
            cout << "Nilai: " << nilai[a] << endl;
        }
    }
}