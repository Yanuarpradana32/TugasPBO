#include <iostream>
#include <iomanip>

// Mendefinisikan kelas Waktu
class Waktu {
private:
    int detik, menit, jam;

public:
    // Konstruktor pertama untuk menginisialisasi objek Waktu dengan nilai detik, menit, dan jam tertentu
    Waktu(int detik, int menit, int jam) {
        this->detik = detik;
        this->menit = menit;
        this->jam = jam;
    }

    // Konstruktor kedua untuk menginisialisasi objek Waktu dengan nilai default (0)
    Waktu() {
        this->detik = 0;
        this->menit = 0;
        this->jam = 0;
    }

    // Fungsi-fungsi getter untuk mendapatkan nilai detik, menit, dan jam
    int DapatkanDetik() {
        return this->detik;
    }

    int DapatkanMenit() {
        return this->menit;
    }

    int DapatkanJam() {
        return this->jam;
    }

    // Fungsi-fungsi setter untuk mengatur nilai detik, menit, dan jam
    void AturDetik(int detik) {
        this->detik = detik;
    }

    void AturMenit(int menit) {
        this->menit = menit;
    }

    void AturJam(int jam) {
        this->jam = jam;
    }

    // Mengonversi waktu ke dalam bentuk string dengan format "jam:menit:detik"
    std::string KonversiKeString() {
        return std::to_string(this->jam) + ":" + std::to_string(this->menit) + ":" + std::to_string(this->detik);
    }

    // Mengatur waktu dengan nilai detik, menit, dan jam baru
    void AturWaktu(int detik, int menit, int jam) {
        this->detik = detik;
        this->menit = menit;
        this->jam = jam;
    }

    // Mengembalikan objek Waktu yang diincrement satu detik
    Waktu WaktuBerikutnya() {
        ++detik;
        if (detik >= 60) {
            detik = 0;
            ++menit;
            if (menit >= 60) {
                menit = 0;
                ++jam;
                if (jam >= 24) {
                    jam = 0;
                }
            }
        }
        return *this;   // Mengembalikan objek "this" untuk mendukung operasi berantai
    }
};

int main() {
    // Membuat objek Waktu dan menginisialisasi dengan nilai tertentu
    Waktu waktu1(1, 2, 3);
    std::cout << waktu1.KonversiKeString() << std::endl; // Menggunakan fungsi KonversiKeString() untuk mengonversi ke string dan mencetaknya

    // Membuat objek Waktu dengan nilai default (0)
    Waktu waktu2;
    std::cout << waktu2.KonversiKeString() << std::endl; // Menggunakan fungsi KonversiKeString() untuk mengonversi ke string dan mencetaknya

    // Mengatur nilai jam, menit, dan detik pada objek waktu1
    waktu1.AturJam(4);
    waktu1.AturMenit(5);
    waktu1.AturDetik(6);
    std::cout << waktu1.KonversiKeString() << std::endl; // Menggunakan fungsi KonversiKeString() untuk mengonversi ke string dan mencetaknya
    std::cout << "Jam: " << waktu1.DapatkanJam() << std::endl; // Menggunakan fungsi DapatkanJam() untuk mendapatkan nilai jam dan mencetaknya
    std::cout << "Menit: " << waktu1.DapatkanMenit() << std::endl; // Menggunakan fungsi DapatkanMenit() untuk mendapatkan nilai menit dan mencetaknya
    std::cout << "Detik: " << waktu1.DapatkanDetik() << std::endl; // Menggunakan fungsi DapatkanDetik() untuk mendapatkan nilai detik dan mencetaknya

    // Mengatur waktu baru pada objek waktu1
    waktu1.AturWaktu(58, 59, 23);
    std::cout << waktu1.KonversiKeString() << std::endl; // Menggunakan fungsi KonversiKeString() untuk mengonversi ke string dan mencetaknya

    // Memanggil fungsi WaktuBerikutnya() dan mencetak hasilnya
    std::cout << waktu1.WaktuBerikutnya().KonversiKeString() << std::endl; 
    std::cout << waktu1.WaktuBerikutnya().WaktuBerikutnya().WaktuBerikutnya().KonversiKeString() << std::endl;

    return 0;
}