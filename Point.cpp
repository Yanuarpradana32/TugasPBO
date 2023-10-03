#include <iostream>
#include <cmath>

// Mendefinisikan kelas Titik (Point)
class Titik {
private:
    int x, y;

public:
    // Konstruktor pertama untuk menginisialisasi objek Titik dengan nilai x dan y tertentu
    Titik(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Konstruktor kedua untuk menginisialisasi objek Titik dengan nilai default (0,0)
    Titik() {
        this->x = 0;
        this->y = 0;
    }

    // Fungsi-fungsi getter untuk mendapatkan nilai x dan y
    int DapatkanX() {
        return this->x;
    }

    int DapatkanY() {
        return this->y;
    }

    // Fungsi-fungsi setter untuk mengatur nilai x dan y
    void AturX(int x) {
        this->x = x;
    }

    void AturY(int y) {
        this->y = y;
    }

    // Mengonversi titik ke dalam bentuk string dengan format "(x,y)"
    std::string KonversiKeString() {
        return "(" + std::to_string(this->x) + "," + std::to_string(this->y) + ")";
    }

    // Mengembalikan jarak dari titik ini ke titik (x,y)
    double Jarak(int x, int y) {
        int xDiff = this->x - x;
        int yDiff = this->y - y;
        return std::sqrt(xDiff * xDiff + yDiff * yDiff);
    }

    // Mengembalikan jarak dari titik ini ke titik lain
    double Jarak(Titik lain) {
        int xDiff = this->x - lain.DapatkanX();
        int yDiff = this->y - lain.DapatkanY();
        return std::sqrt(xDiff * xDiff + yDiff * yDiff);
    }

    // Mengembalikan jarak dari titik ini ke titik (0,0)
    double JarakDariAsal() {
        return std::sqrt(this->x * this->x + this->y * this->y);
    }
};

int main() {
    // Membuat objek Titik dan menginisialisasi dengan nilai tertentu
    Titik titik1(1, 2);
    std::cout << titik1.KonversiKeString() << std::endl; // Menggunakan fungsi KonversiKeString() untuk mengonversi ke string dan mencetaknya

    // Membuat objek Titik dengan nilai default (0,0)
    Titik titik2;
    std::cout << titik2.KonversiKeString() << std::endl; // Menggunakan fungsi KonversiKeString() untuk mengonversi ke string dan mencetaknya

    // Mengatur nilai x dan y pada objek titik1
    titik1.AturX(3);
    titik1.AturY(4);
    std::cout << titik1.KonversiKeString() << std::endl; // Menggunakan fungsi KonversiKeString() untuk mengonversi ke string dan mencetaknya
    std::cout << "X adalah: " << titik1.DapatkanX() << std::endl; // Menggunakan fungsi DapatkanX() untuk mendapatkan nilai x dan mencetaknya
    std::cout << "Y adalah: " << titik1.DapatkanY() << std::endl; // Menggunakan fungsi DapatkanY() untuk mendapatkan nilai y dan mencetaknya

    // Mengatur nilai x dan y pada objek titik1 menggunakan fungsi setXY()
    titik1.AturX(5);
    titik1.AturY(6);
    std::cout << titik1.KonversiKeString() << std::endl; // Menggunakan fungsi KonversiKeString() untuk mengonversi ke string dan mencetaknya
    std::cout << "X adalah: " << titik1.DapatkanX() << std::endl; // Menggunakan fungsi DapatkanX() untuk mendapatkan nilai x dan mencetaknya
    std::cout << "Y adalah: " << titik1.DapatkanY() << std::endl; // Menggunakan fungsi DapatkanY() untuk mendapatkan nilai y dan mencetaknya

    // Menghitung jarak antara dua titik
    titik2.AturX(10);
    titik2.AturY(11);
    std::cout << "Jarak adalah: " << titik1.Jarak(titik2) << std::endl; 

    return 0;
}