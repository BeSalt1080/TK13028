#include <iostream>
#include <string>

using namespace std;
int main()
{
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int i;

    cout << "Isi dari array indeks ke 0 adalah " << cars[0] << endl
         << endl;
    cout << "Mencetak semua isi array cars" << endl;
    for (i = 0; i < 4; i++)
    {
        cout << "Cars index ke " << i << " - " << cars[i] << endl;
    }
}