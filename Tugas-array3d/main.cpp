#include <iostream>

using namespace std;

int main()
{
    int i=0, j=1, x=0, z=2;
    int a[3][2][2];
    float rata;

    for(int r=0; r<3; r++){
        for(int i=0; r<2; r++){
            for(int o=0; o<3; o++){
                a[r][i][o] = z;
                z += 2;
                cout << z << " ";
                x += z;
                i += j;
                rata = (float) x/i;
            }
        }
    }
    cout << "\n";
    cout << "jumlah kelipatan 4 = " << x << endl;
    cout << "Rata-rata jumlah kelipatan 4 = " << rata << endl;
    return 0;
}
