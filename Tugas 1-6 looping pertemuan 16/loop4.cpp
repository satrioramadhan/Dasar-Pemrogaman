#include <iostream>

using namespace std;

int main()
{
   float i = 0, z, rata;
    for(int x = 1; x<=20; x++){
        cout << x << endl;
        i += x;
        z = x;
    }

    cout << "\n\nJumlah = " << i << endl;
    rata = i/z;
    cout << "Rata-Rata = " << rata;
    return 0;
}
