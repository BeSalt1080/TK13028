#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string nilai;
    int count = 0;
    float data[50], sum = 0, avg;
    ifstream myfile("temperatur.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, nilai))
        {
            data[count] = stof(nilai);
            sum = sum + data[count];
            count++;
        }

        myfile.close();
        avg = sum / count;
        cout << "Temperatur Rata-rata = " << avg << endl
             << endl;
        for (int i = 0; i < count; i++)
        {
            cout << "Temperatur hari ke " << i + 1 << " = " << data[i] << endl;
        }
    }
    else
    {
        cout << "File tidak dapat dibuka";
    }
}