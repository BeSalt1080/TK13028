#include <iostream>
#include <string>
using namespace std;

int main()
{
    string confirmation;
    cout << "Ketik 'exit' jika anda ingin keluar dari program, atau enter untuk melanjutkan" << endl;
    getline(cin, confirmation);
    if (confirmation == "exit")
        return 1;
    cout << "Masukkan banyaknya loop: ";
    int count;
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        cout << "Program C++ ke-" << i << endl;
    }
    return 0;
}