#include <iostream>

using namespace std;

void cetak(int M[50][50], int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << M[i][j];
        }
        cout << endl;
    }
}
void transpose(int M1[50][50], int (&M2)[50][50], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            M2[i][j] = M1[j][i];
        }
    }
    cout << "Matriks Transpose" << endl;
    cetak(M2, r, c);
}

int main()
{
    int A[50][50], B[50][50], row, col, x, y;

    cout << "Ketikkan jumlah baris: ";
    cin >> row;
    cout << "Ketikkan jumlah kolom: ";
    cin >> col;
    cout << "Ketikkan elemen matriks ukuran " << row << " X " << col << endl;
    for (x = 0; x < row; x++)
    {
        for (y = 0; y < col; y++)
        {
            cout << "A[" << x << "][" << y << "] = ";
            cin >> A[x][y];
        }
    }
    cout << endl;
    cetak(A, row, col);
    transpose(A, B, row, col);
}