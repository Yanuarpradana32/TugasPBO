/**
 * Kelas Account menggambarkan sebuah rekening bank dengan saldo
 */
public class Account {
    //Variabel instance privat
    private int nomor;
    private double saldo;

    //konstruktor 
    //membuat instansi Account dengan nomor dan saldo awal 0
    public Account (int nomor){
        this.nomor = nomor;
        this.saldo = 0.0; //"this" adalah opsional
    }

    //membuat instansi Account dengan nomor dan saldo awal yang ditentukan
    public Account (int nomor, double saldo){
        this.nomor = nomor;
        this.saldo = saldo;
    }

    //metode getter/setter publik untuk variabel instance privat. tidak ada setter untuk nomor karena tidak dirancang untuk diubah
    //tidak ada setter untuk saldo karena diubah melalui credit() dan debit()
    //mengembalikan nomor rekening
    public int getNomor(){
        return this.nomor;
    }

    //mengembalikan saldo rekening 
    public double getSaldo(){
        return this.saldo;
    }

    //mengembalikan deskripsi string dari instansi ini
    public String toString(){
        //gunakan fungsi bawaan System.format()untuk membuat String yang diformat
        return String.format("Rekening[nomor=%d,saldo=$%.2f]", nomor, saldo);
    }

    //menggunakan jumlah tertentu ke saldo
    public void kredit (double jumlah){
        saldo += jumlah;
    }

    //mengurangkan jumlah tertentu dari saldo, jika saldo >= jumlah 
    public void debit (double jumlah){
        if (saldo >= jumlah){
            saldo -= jumlah;
        } else {
            System.out.println ("Jumlah melebihi saldo");
        }
    }
    //mentransfer jumlah tetentu ke akun lain, jika saldo >= jumlah
    public void transferKe(double jumlah, Account lain){
        if (saldo >= jumlah ){
            this.saldo -= jumlah;
            lain.saldo += jumlah;
        } else {
            System.out.println("jumlah melebihi saldo");
        }

    }


}
