#include <iostream>

using namespace std;

int main()
{
   int i, maks, minn;
    cout << "Program ini akan berhenti jika input anda angka -99" << endl;

    while (i!= -99){
        cout << "Masukan Nilai Anda : ";
        cin >> i;
        if (i == -99){
        cout << "\n\nKeluar Karena Break" << endl;
        break;
        }
        if (i==0){
        maks = i;
        minn = i;
        } else {
        if (i > maks){
            maks = i;
         }
        if (i < minn){
            minn = i;
        }
        }
    }
    cout << " Nilai maksimal = " << maks << endl;
    cout << " Nilai minimal = " << minn << endl;
}
