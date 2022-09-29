#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;


    cout << "Kamu masuk dalam kategori apa, ayo kita cek" << endl;
    cout << "Daftar Jurusan" << endl;
    cout << "1. Teknik informatika" << endl;
    cout << "2. Sistem informasi" << endl;
    cout << "3. Desain kominikasi visual" << endl;

    cout << "\nKategori Mahasiswa" << endl;
    cout << "1. Semester 1-2 = Freshman " << endl;
    cout << "2. Semester 3-4 = Sophomore" << endl;
    cout << "3. Semester 5-6 = Junior" << endl;
    cout << "4. Semester 7-8 = Senior" << endl;


    cout << "Masukan Jurusan kamu sesuai angka urutan " << endl;
    cout << "\ncontoh: 1 (untuk teknik informatika) dan juga seterusnya" << endl;
    cin >> a;
    if (a == 1){
        cout << "Jurusan kamu Teknik informatika" << endl;
    }

    else if (a == 2){
        cout << " Jurusan kamu Sistem informasi" << endl;
    }

    else if (a == 3){
        cout << " Jurusan kamu Desain kominikasi visual" << endl;
    }


    cout << "\nMasukan semester kamu" << endl;
    cin >> b;

    if (b == 1){
        cout << "\nkamu masuk kategori Freshman" << endl;
    }
    if (b == 2){
        cout << "\nkamu masuk kategori Freshman" << endl;
    }
    if (b == 3){
        cout << "\nkamu masuk kategori Sophomore" << endl;
    }
    if (b == 4){
        cout << "\nkamu masuk kategori Sophomore" << endl;
    }
    if (b == 5){
        cout << "\nkamu masuk kategori Junior" << endl;
    }
    if (b == 6){
        cout << "\nkamu masuk kategori Junior" << endl;
    }
    if (b == 7){
        cout << "\nkamu masuk kategori senior" << endl;
    }
    if (b == 8){
        cout << "\nkamu masuk kategori senior" << endl;
    }

    cout << " selesai^-^" << endl;



   return 0;
}
