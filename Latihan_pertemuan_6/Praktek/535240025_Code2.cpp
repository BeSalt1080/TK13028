#include <iostream>

using namespace std;

int main()
{
    int rows, cols, i, j;
    int a[50][50];
    cout << "Ketikkan jumlah baris: ";
    cin >> rows;
    cout << "Ketikkan jumlah kolom: ";
    cin >> cols;
    cout << "Ketikkan elemen matriks ukuran" << rows << "x" << cols << ": " << endl;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    cout << "Hasil matriks: " << endl;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Cetak matriks upper trianglular (segitiga atas)" << endl;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (i <= j)
            {
                cout << a[i][j] << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    cout << "Cetak matriks lower triangular (segitiga bawah)" << endl;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (i >= j)
            {
                cout << a[i][j] << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}