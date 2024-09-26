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
void inputarray2d(int (&M)[50][50], int &row, int &col)
{
    int x, y;
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
            cin >> M[x][y];
        }
    }
    cetak(M, row, col);
}

void sumarray2d(int M1[50][50], int M2[50][50], int M3[50][50], int row1, int col1, int row2, int col2)
{
    int x, y;
    if (row1 == row2 && col1 == col2)
    {
        for (x = 0; x < row1; x++)
        {
            for (y = 0; y < col1; y++)
            {
                M3[x][y] = M1[x][y] + M2[x][y];
            }
        }
        cout << "Matriks hasil penjumlahan: " << endl;
        cetak(M3, row2, col2);
    }
    else
    {
        cout << "Operasi penjumlahan tidak bisa dilakukan karena ukuran matriks pertama dan kedua tidak sama" << endl;
    }
}

void multiplyarray2d(int M1[50][50], int M2[50][50], int M3[50][50], int row1, int col1, int row2, int col2)
{
    int i, j, k;
    if (col1 == row2)
    {
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                M3[i][j] = 0;
                for (k = 0; k < col1; k++)
                {
                    M3[i][j] += M1[i][k] * M2[k][j];
                }
            }
        }
        cout << "Matriks perkalian: " << endl;
        cetak(M3, row1, col2);
    }
    else
    {
        cout << "Operasi perkalian tidak bisa dilakukan karena ukuran matriks pertama dan kedua tidak sama" << endl;
    }
}

int main()
{
    int A[50][50], B[50][50], C[50][50], row1, col1, row2, col2;
    inputarray2d(A, row1, col1);
    inputarray2d(B, row2, col2);

    cout << "Matriks pertama: " << endl;
    cetak(A, row1, col1);
    cout << "Matriks kedua: " << endl;
    cetak(B, row2, col2);

    sumarray2d(A, B, C, row1, col1, row2, col2);
    multiplyarray2d(A, B, C, row1, col1, row2, col2);
}