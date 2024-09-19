#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string inputKalimat()
{
    string kalimat;
    int count = 0;
    int length = 0;
    while (count < 2)
    {
        cout << "Masukkan kalimat lebih dari 3 kata: ";
        getline(cin, kalimat);
        count = 0;
        length = kalimat.length();
        for (int i = 0; i < length; i++)
        {
            if (kalimat[i] == ' ')
            {
                count++;
            }
        }
        if (count < 2)
        {
            cout << "Kalimat kurang dari 3 kata. Coba lagi." << endl;
        }
    }
    return kalimat;
}

char inputKarakter()
{
    char karakter;
    cout << "Masukkan karakter yang akan dicari: ";
    cin >> karakter;
    return karakter;
}

int pencarianJumlahKarakter(string kalimat, char karakter)
{
    int length = kalimat.length();
    int jumlahKarakter = 0;
    for (int i = 0; i < length; i++)
    {
        if (tolower(kalimat[i]) == tolower(karakter))
        {
            jumlahKarakter++;
        }
    }
    return jumlahKarakter;
}

int main()
{
    string kalimat = inputKalimat();
    char karakter = inputKarakter();
    int jumlahKarakter = pencarianJumlahKarakter(kalimat, karakter);

    cout << "Jumlah karakter " << karakter << " pada kalimat adalah " << jumlahKarakter << endl;
    return 0;
}
