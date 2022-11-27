#include <iostream>

using namespace std;

int main()
{
    int i, x=1, jmlh=0, data;
    do {
        cout << "Input BIl : ";
        cin >> i;
        if ( i == 9999) {continue;
        }
        cout << i << endl;

        data = x;
        x++;
        jmlh += i;

    } while (i!=9999);{
       cout << "Jumlah angka : " << jmlh << endl;
       cout << "Jumlah cacah angka : " << data << endl;
       }

    return 0;
}
