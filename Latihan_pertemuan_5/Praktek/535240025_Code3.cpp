#include <iostream>

using namespace std;

int main()
{
    int nonarray;
    int array[10];
    cout << "| Contoh tanpa array |" << endl
         << endl;
    cout << "Masukkan nilai pertama: ";
    cin >> nonarray;
    cout << "Masukkan nilai kedua: ";
    cin >> nonarray;
    cout << "Nilai variabel nonarray: " << nonarray << endl;
    cout << "| Contoh dengan array |" << endl
         << endl;
    cout << "Masukkan nilai pertama: ";
    cin >> array[0];
    cout << "Masukkan nilai kedua: ";
    cin >> array[1];
    cout << "Nilai variabel array[0]: " << array[0] << endl;
    cout << "Nilai variabel array[1]: " << array[1] << endl;
}