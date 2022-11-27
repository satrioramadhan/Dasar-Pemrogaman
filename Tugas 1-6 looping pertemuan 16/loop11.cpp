#include <iostream>

using namespace std;

int main()
{
    int i, x, batas=10, jmlh;
    cout << "Input : ";
    cin >> x;
    cout << endl;
    for( i = 1; i <= batas; i++){
        jmlh = i*x;
        cout << i << " x " << x << " = " << jmlh << endl;
    }


    //cout << "Hello world!" << endl;
    return 0;
}
