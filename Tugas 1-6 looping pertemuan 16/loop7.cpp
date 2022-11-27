#include <iostream>

using namespace std;

int main()
{
    int i, jmlh;
    do{
     cout << "Input Bil : ";
     cin >> i;
     if (i==9999){continue;}
     cout << i << endl;
     jmlh += i;

    } while (i!=9999); {
        cout << "Jumlah Angka = "<< jmlh << endl;
        }

    return 0;
}

