#include <iostream>

using namespace std;

int main()
{
    int data[5] = {1, 2, 3, 4, 5};
    int i;

    cout << "Jumlah byte dari array data adalah " << sizeof(data) << endl
         << endl;

    for (i = 0; i < 5; i++)
    {
        cout << data[i] << endl;
    }
}