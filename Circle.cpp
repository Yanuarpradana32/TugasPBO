/* Kelas Lingkaran (Semua kode sumber dalam satu file) (LingkaranAIO.cpp) */
#include <iostream>    // menggunakan fungsi-fungsi IO
#include <string>      // menggunakan string
using namespace std;
 
class Lingkaran {
private:
   double jariJari;   // Anggota data (Variabel)
   string warna;      // Anggota data (Variabel)
 
public:
   // Konstruktor dengan nilai default untuk anggota data
   Lingkaran(double r = 1.0, string w = "merah") {
      jariJari = r;
      warna = w;
   }
 
   double dapatJariJari() {  // Fungsi anggota (Getter)
      return jariJari;
   }
 
   string dapatWarna() {     // Fungsi anggota (Getter)
      return warna;
   }
 
   double dapatLuas() {      // Fungsi anggota
      return jariJari*jariJari*3.1416;
   }
};   // perlu mengakhiri deklarasi kelas dengan titik koma
 
// Fungsi pengujian
int main() {
   // Membuat instance Lingkaran
   Lingkaran l1(1.2, "biru");
   cout << "Jari-Jari=" << l1.dapatJariJari() << " Luas=" << l1.dapatLuas()
        << " Warna=" << l1.dapatWarna() << endl;
 
   // Membuat instance Lingkaran lainnya
   Lingkaran l2(3.4); // warna default
   cout << "Jari-Jari=" << l2.dapatJariJari() << " Luas=" << l2.dapatLuas()
        << " Warna=" << l2.dapatWarna() << endl;
 
   // Membuat instance Lingkaran menggunakan konstruktor default tanpa argumen
   Lingkaran l3;      // jari-jari dan warna default
   cout << "Jari-Jari=" << l3.dapatJariJari() << " Luas=" << l3.dapatLuas()
        << " Warna=" << l3.dapatWarna() << endl;
   return 0;
}