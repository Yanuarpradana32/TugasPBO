#include <iostream>
#include <string>
#include <iomanip>

class Tanggal {
private:
    int tahun, bulan, hari;

public:
    // Konstruktor untuk menginisialisasi tanggal dengan nilai yang diberikan
    Tanggal(int tahun, int bulan, int hari) {
        this->tahun = tahun;
        this->bulan = bulan;
        this->hari = hari;
    }

    // Getter untuk mendapatkan tahun
    int DapatkanTahun() {
        return this->tahun;
    }

    // Getter untuk mendapatkan bulan
    int DapatkanBulan() {
        return this->bulan;
    }

    // Getter untuk mendapatkan hari
    int DapatkanHari() {
        return this->hari;
    }

    // Setter untuk mengubah tahun
    void AturTahun(int tahun) {
        this->tahun = tahun;
    }

    // Setter untuk mengubah bulan
    void AturBulan(int bulan) {
        this->bulan = bulan;
    }

    // Setter untuk mengubah hari
    void AturHari(int hari) {
        this->hari = hari;
    }

    // Mengembalikan representasi string dari tanggal dalam format "MM/DD/YYYY" dengan leading zero
    std::string KonversiKeString() {
        std::ostringstream stream;
        stream << std::setfill('0') << std::setw(2) << this->bulan << "/"
               << std::setfill('0') << std::setw(2) << this->hari << "/"
               << std::setw(4) << this->tahun;
        return stream.str();
    }

    // Mengatur tahun, bulan, dan hari sekaligus
    void AturTanggal(int tahun, int bulan, int hari) {
        this->tahun = tahun;
        this->bulan = bulan;
        this->hari = hari;
    }
};

int main() {
    // Membuat objek Tanggal dengan tanggal awal 2020/2/8
    Tanggal tanggal1(2020, 2, 8);
    std::cout << "Tanggal: " << tanggal1.KonversiKeString() << std::endl;

    // Mengubah tahun, bulan, dan hari menggunakan setter
    tanggal1.AturTahun(2012);
    tanggal1.AturBulan(12);
    tanggal1.AturHari(23);
    std::cout << "Tanggal setelah diubah: " << tanggal1.KonversiKeString() << std::endl;
    std::cout << "Tahun: " << tanggal1.DapatkanTahun() << std::endl;
    std::cout << "Bulan: " << tanggal1.DapatkanBulan() << std::endl;
    std::cout << "Hari: " << tanggal1.DapatkanHari() << std::endl;

    // Mengatur tahun, bulan, dan hari sekaligus
    tanggal1.AturTanggal(2988, 1, 2);
    std::cout << "Tanggal setelah diubah kembali: " << tanggal1.KonversiKeString() << std::endl;

    return 0;
}
