#include <iostream>

using namespace std;

int main()
{
    //Rumus luas lingkaran

    int r;
    float phi = 3.14;
    float luaslingkaran;

    cout<<"jari-jari lingkaran: ";
    cin>>r;

    luaslingkaran = r*r*phi;
    cout<<"luas lingkaran : "<<luaslingkaran <<endl;


    //Rumus luas persegi panjang

    int p;
    int l;
    cout<<"luas persegi panjang"<<endl;

    cout<<"panjang persegi panjang: ";
    cin>>p;

    cout<<"lebar persegi panjang: ";
    cin>>l;

    float luaspersegipanjang = p*l;
    cout<<"luas persegi panjang : ";
    cout<<luaspersegipanjang;



    return 0;

}

