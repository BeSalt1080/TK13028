#include <iostream>

using namespace std;

int main()
{
     int rows, cols, i, j;
     int one[50][50], two[50][50], sum[50][50];

     cout << "Ketikkan jumlah baris: ";
     cin >> rows;
     cout << "Ketikkan jumlah kolom: ";
     cin >> cols;

     cout << "Ketikkan elemen matriks pertama ukuran " << rows << " X " << cols << endl;

     for (i = 0; i < rows; i++)
     {
          for (j = 0; j < cols; j++)
          {
               cout << "one[" << i << "][" << j << "] = ";
               cin >> one[i][j];
          }
     }
     cout << endl;
     cout << "Ketikkan elemen matriks kedua ukuran " << rows << " X " << cols << endl;

     for (i = 0; i < rows; i++)
     {
          for (j = 0; j < cols; j++)
          {
               cout << "two[" << i << "][" << j << "] = ";
               cin >> two[i][j];
          }
     }

     for (i = 0; i < rows; i++)
     {
          for (j = 0; j < cols; j++)
          {
               sum[i][j] = one[i][j] + two[i][j];
          }
     }

     cout << "Cetak matriks hasil penjumlahan" << endl;
     for (i = 0; i < rows; i++)
     {
          for (j = 0; j < cols; j++)
          {
               cout << sum[i][j] << " ";
          }
          cout << endl;
     }
}