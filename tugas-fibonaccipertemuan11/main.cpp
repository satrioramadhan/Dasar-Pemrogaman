#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b= 1;
    int c;
    int s=100;

    c= a+b;
    cout << c << endl;

    while (c <= s) {
        cout << c << endl;
        a=b;
        b=c;
        c= b+a;


    }

    return 0;
}
