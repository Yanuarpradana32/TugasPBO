/** 
 * kelas Date menggambarkan sebuah tanggal kalender dengan hari, bulan dan tahun 
 * kelas ini tidak melakukan input untuk hari, bula dan tahun 
 */

public class Date {
    //varabel inatance privat
    private int tahun, bulan, hari;

    //membuat intance Date degan tahun, bulan dan hari yang diberikan. tidak ada validasi input 
    public Date (int tahun, int bulan, int hari){
        this.tahun = tahun;
        this.bulan = bulan;
        this.hari = hari;
    }

    //getter atau setter publik untuk variabel privat
    // menggembalikan tahun
    public int getTahun(){
        return this.tahun;
    }

    //mengembalikan bulan 
    public int getBulan(){
        return this.bulan;
    } 

    //mengembalikan hari
    public int getHari(){
        return this.hari;
    }

    //megatur tahun tidak ada validasi input
    public void setTahun (int tahun){
        this.tahun = tahun;
    }

    //mengatur bulan tidak ada validasi input 
    public void setBulan (int bulan){
        this.bulan = bulan;
    }

    //mengatur hari tidak ada validasi input 
    public void setHari (int hari){
        this.hari= hari;
    }

    //mengembalikan string deskriptif dalam furmat "MM/DD/YYYY" dengan leading zero 
    public String toString (){
        //menggunakan funsi bawaam string.format() untuk membentuk string yang difromat
        return String.format("%02d/%02d/%4d", bulan, hari, tahun);
        //spesifier "0" untuk mencetak leading zeros
    }

    //mengatur tahun, bulan, dan hari tidak ada validasi input 
    public void setDate (int tahun, int bulan, int hari){
        this.tahun = tahun ;
        this.bulan = bulan;
        this.hari = hari;
    }

}
