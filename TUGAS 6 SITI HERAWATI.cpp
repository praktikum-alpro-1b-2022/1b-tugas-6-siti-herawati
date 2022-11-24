#include <iostream>
using namespace std;
double konversi(double);
float konversi(float);
int konversi(int);
int main() {
 cout << "Hasil konversi: " << konversi(230.8) << endl;
 cout << "Hasil konversi: " << konversi(60.7) << endl;
 cout << "Hasil konversi: " << konversi(50) << endl;
 return 0;
}
double konversi(double f){
 return ((f-32.0)*0.55);
}
float konversi(float f){
 return ((f-32.0)*0.55);
}
int konversi(int f){
 return ((f-32.0)*0.55);
}
