#include <iostream>

using namespace std;

int main()
{
    int i, x=1, data;
    do {
        cout << "Input BIl : ";
        cin >> i;
        if ( i == 9999) {continue;
        } else {
        cout << i << endl;
        data = x;
        }
        x++;

    } while (i!=9999);
       cout << "Jumlah angka : " << data << endl;
    return 0;
}
