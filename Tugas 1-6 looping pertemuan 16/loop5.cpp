#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "Program ini akan berhenti jika input anda angka -99" << endl;

    while (i!= -99){
        cout << "Masukan Nilai Anda : ";
        cin >> i;
        if (i == -99){
        cout << "\n\nKeluar Karena Break" << endl;
        break;
        }
    }
    return 0;
}
