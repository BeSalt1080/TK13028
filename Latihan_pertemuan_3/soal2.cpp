#include <iostream>
#include <string>
using namespace std;

int main()
{
    int lulus = 0, perbaikan = 0, tidak_lulus = 0;
    float nilai_akhir;
    string lanjut;
    cout << "Apakah ingin memasukkan nilai siswa? (y/yes) untuk memulai: ";
    cin >> lanjut;

    while (lanjut == "y" || lanjut == "yes")
    {
        cout << "Masukkan nilai akhir siswa: ";
        cin >> nilai_akhir;

        if (nilai_akhir >= 70)
        {
            cout << "Keterangan: LULUS" << endl;
            lulus++;
        }
        else if (nilai_akhir >= 50 && nilai_akhir < 70)
        {
            cout << "Keterangan: TES PERBAIKAN" << endl;
            perbaikan++;
        }
        else
        {
            cout << "Keterangan: TIDAK LULUS" << endl;
            tidak_lulus++;
        }
        cout << "Apakah ingin memasukkan nilai lagi? (y/yes) untuk melanjutkan: ";
        cin >> lanjut;
    }

    cout << "Total siswa yang LULUS: " << lulus << endl;
    cout << "Total siswa yang TES PERBAIKAN: " << perbaikan << endl;
    cout << "Total siswa yang TIDAK LULUS: " << tidak_lulus << endl;

    return 0;
}
