
#include <iostream>

using namespace std;

int main () {

float c, f;


cout << "------------------------------------------------------------------------" << endl;
cout << "\tCelcius \tFahremheit \t Keterangan" << endl;
cout << "------------------------------------------------------------------------" << endl;
for(c = 100; c >= -45; c--) {
        f = (c*1.8)+32;
  if(c == 100) {
  cout << "\t" << c << "\t\t" << f << " \t\t Air Mendidih \n";
  } else if(c == 40) {
  cout << "\t" << c << "\t\t" << f << " \t\t Air Mandi Panas \n";
  } else if(c == 37) {
  cout << "\t" << c << "\t\t" << f << " \t\t Temperatur Tubuh \n";
  } else if(c == 30) {
  cout << "\t" << c << "\t\t" << f << " \t\t Cuaca Pantai\n";
  } else if(c == 21) {
  cout << "\t" << c << "\t\t" << f << " \t\t Temperatur Ruangan \n";
 } else if(c == 10) {
  cout << "\t" << c << "\t\t" << f << " \t\t Hari Yang Dingin \n";
 } else if(c == 0) {
  cout << "\t" << c << "\t\t" << f << " \t\t Titik Beku Air \n";
 } else if(c == -18) {
  cout << "\t" << c << "\t\t" << f << " \t\t Cuaca Dingin Bersalju \n";
 } else if(c == -40) {
  cout << "\t" << c << "\t\t" << f << " \t\t Cuaca Sangat Dingin Bersalju \n";
  cout << "-----------------------------------------------------------------------" << endl;
}
}

return 0;
}



