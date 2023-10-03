#include <iostream>
#include <iomanip>

// Mendefinisikan kelas Akun (Account)
class Akun {
private:
    int Nomor;
    double Saldo;

public:
    // Konstruktor pertama untuk menginisialisasi objek Akun dengan nomor tertentu dan saldo awal 0
    Akun(int Nomor) {
        this->Nomor = Nomor;
        this->Saldo = 0.0; 
    }

    // Konstruktor kedua untuk menginisialisasi objek Akun dengan nomor dan saldo awal tertentu
    Akun(int Nomor, double Saldo) {
        this->Nomor = Nomor;
        this->Saldo = Saldo;
    }

    // Fungsi getter untuk mendapatkan nomor akun
    int DapatkanNomor() {
        return this->Nomor;
    }

    // Fungsi getter untuk mendapatkan saldo
    double DapatkanSaldo() {
        return this->Saldo;
    }

    // Mengonversi Akun ke dalam bentuk string dengan format "Akun[nomor=...,saldo=$...]"
    std::string KonversiKeString() {
        return "Akun[nomor=" + std::to_string(this->Nomor) + ",saldo=$" + std::to_string(this->Saldo) + "]";
    }

    // Menambahkan jumlah tertentu ke saldo
    void Kredit(double Jumlah) {
        this->Saldo += Jumlah;
    }

    // Mengurangi saldo sejumlah tertentu, jika saldo cukup
    void Debit(double Jumlah) {
        if (this->Saldo >= Jumlah) {
            this->Saldo -= Jumlah;
        } else {
            std::cout << "Jumlah melebihi saldo" << std::endl;
        }
    }

    // Mentransfer jumlah tertentu ke Akun lain, jika saldo cukup
    void TransferKe(double Jumlah, Akun &tujuan) {
        if (this->Saldo >= Jumlah) {
            this->Saldo -= Jumlah;
            tujuan.Kredit(Jumlah);
        } else {
            std::cout << "Jumlah melebihi saldo" << std::endl;
        }
    }
};

int main() {
    // Membuat objek Akun dan menginisialisasi dengan nomor tertentu
    Akun akun1(5566);
    std::cout << akun1.KonversiKeString() << std::endl; 

    // Membuat objek Akun dengan nomor dan saldo awal tertentu
    Akun akun2(1234, 99.9);
    std::cout << akun2.KonversiKeString() << std::endl; 

    // Menggunakan fungsi DapatkanNomor() dan DapatkanSaldo() untuk mendapatkan informasi akun
    std::cout << "Nomor akun: " << akun2.DapatkanNomor() << std::endl; 
    std::cout << "Saldo: $" << akun2.DapatkanSaldo() << std::endl;

    // Menggunakan fungsi Kredit(), Debit(), dan TransferKe()
    akun1.Kredit(11.1);
    std::cout << akun1.KonversiKeString() << std::endl; 
    akun1.Debit(5.5);
    std::cout << akun1.KonversiKeString() << std::endl; 
    akun1.Debit(500); // Uji error debit
    std::cout << akun1.KonversiKeString() << std::endl; 

    akun2.TransferKe(1.0, akun1);
    std::cout << akun1.KonversiKeString() << std::endl; 
    std::cout << akun2.KonversiKeString() << std::endl; 

    return 0;
}