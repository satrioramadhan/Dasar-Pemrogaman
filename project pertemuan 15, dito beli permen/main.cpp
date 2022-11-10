#include <iostream>

using namespace std;

int main()
{

    int i, x, a, c;
    c = 5000;
    cout << "Dito memiliki uang 5000, ia ingin beli permen. jika harga permen 300, 500, 1000 /biji-nya" << endl;
    cout << "Jika harga permen 500 /biji, dito akan beli 5 biji " << endl;
    cout << "Jika harga permen 1000 /biji, dito akan beli hingga uangnya habis" << endl;
    cout << "Jika harga permen 300/biji, dito akan ngehitung duitnya dulu terus beli sedapatnya dari uangnya" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "Hitunglah permen yang didapat dari masing-masing harga tadi" << endl;
    cout << "1. Harga 300/biji" << endl;
    cout << "2. Harga 500/biji" << endl;
    cout << "3. Harga 1000/biji" << endl;
    cout << "Pilih harga harga permen (1/2/3)" << endl;
    cin >> x;

    //harga 300
    if (x == 1){


        a = c/300;
        cout << endl;
        cout << "Dito bakal dapet permen sebanyak = " << a << " permen" << endl;
        cout << "Cara Dito menghitung gini" << endl;
        cout << endl;

       i = 300;

       while (i < 5000){
        cout << " ";
        cout << i;
        i += 300;
       }
    } else if (x == 2){
        cout << endl;
        cout << "kalo harganya 500, dito dapet permen 5 biji, soalnya mintanya gitu, dari soal wkwk :v" << endl;

        a = c - (5*500);
        cout << "untuk membeli 5 biji permen, dito harus bayar = " << a << endl;

    } else if (x == 3) {
        cout << endl;

        a = c / 1000;
        cout << "Dito bakal dapet permen sebanyak = " << a << " permen, dan uang dito abis" << endl;
    } else {
        cout << endl;
        cout << "Input kamu salah" << endl;
    }

    cout << endl;
    cout << endl;
    cout << "Baca doa dulu dito kalo mau makan, biar berkah" << endl;

    //cout << "" << endl;



    return 0;
}
