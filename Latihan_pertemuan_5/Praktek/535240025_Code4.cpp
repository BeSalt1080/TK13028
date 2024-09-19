#include <iostream>

using namespace std;

int main()
{
    int n, a;
    float temp[10], avg, sum = 0;
    cout << "Ketikkan jumlah hari: ";
    cin >> n;
    cout << "Ketikkan nilai temperatur untuk masing-masing hari" << endl;
    for (a = 0; a < n; a++)
    {
        cout << "Temperatur hari ke " << a << ": ";
        cin >> temp[a];
        sum = sum + temp[a];
    }
    avg = sum / n;
    cout << "Rata-rata temperatur adalah : " << avg << endl;
}