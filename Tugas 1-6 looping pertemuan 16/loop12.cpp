#include <iostream>

using namespace std;

int main()
{
    float x, i, j;
    cout << "Koversi suhu" << endl;
    cout << "\nSilahkan pilih : '1' atau '2'" << endl;
    cout << "\n'1' untuk konversi suhu celcius ke fahrenheit" << endl;
    cout << "'2' untuk konfersi suhu Fahrenheit ke Celcius" << endl;
    cin >> x;

    if ( x == 1 ){

    // celcius ke fahrenheit
    cout << "\n------------------------------------------" << endl;
    cout << "  Celcius                    Fahrenheit"    << endl;
    cout << "------------------------------------------" << endl;
        for (i = 0; i <=100; i++){
          j = (i*1.8)+32;
          cout << "    " << i << "             :         " << j << endl;
        }
    cout << "------------------------------------------" << endl;

    }

    else if ( x == 2 ) {

    // farenheit ke celcius
    cout << "\n------------------------------------------" << endl;
    cout << "  Fahrenheit                    Celcius"    << endl;
    cout << "------------------------------------------" << endl;

        for (i = 0; i <=100; i++){
          j = (i-32)*5/9;
          cout << "    " << i << "             :         " << j << endl;
        }
    cout << "------------------------------------------" << endl;
    } else {
        cout << "\nInput kamu salah";
    }
    return 0;
}
