/**
 *  Kelas time menggambarkan sebuah intansi waktu dengan detik, menit, dan jam 
 * kelas ini tidak melakukan validasi input untuk detik, menit dan jam 
 */

public class Time {
    //Varibael intance privat 
    private int detik, menit, jam;

    //konstruktor (overloaded)
    // membuat intance Time dengan detik, menit, dan jam yang diberikan tidak ada validasi input
    public Time (int detik, int menit, int jam){
        this.detik = detik; 
        this.menit = menit;
        this.jam = jam;
    }

    //membuat intance Time dengan nilai default
    public Time(){
        this.detik = 0;
        this.menit = 0;
        this.jam = 0;
    }

    //getter/setter publik unuk variabel privat 
    // mengembalikan detik 
    public int getDetik(){
        return this.detik;
    }

    //mengembalikan menit
    public int getMenit(){
        return this.menit;
    }

    //mengembalikan jam
    public int getJam(){
        return this.jam;
    }

    //mengatur detik. tidak ada validasi input
    public void setDetik(int detik){
        this.detik = detik;
    }

    //mengatur menit. tidak ada validasi input
    public void setMenit(int menit){
        this.menit = menit;
    }

    //mengatur jam tidak ada validasi input 
    public void setJam(int jam){
        this.jam = jam;
    }

    //mengembalikan string yang menjelaskan dirinya sendiri dalam fromat "hh:mm:ss" dengan leading zeros
    public String toString(){
        // menggunakan fungsi bawaan String.format()untuk membentuk string yang diformat 
        return String.format ("%02d:%02d;%02d", jam, menit, detik);
        // "0" digunakan untuk mencetak luading zzeros, jika tersedia 
    }

    //mengatur detik, menit dan jam ke nilai yang diberikan 
    public void setTime(int detik, int menit, int jam ){
        //tidak ada validasi input 
        this.detik = detik;
        this.menit = menit;
        this.jam = jam;
    }

    //melanjutkan intansi waktu ini dengan satu detik dan mengembalikan instansi ini untuk mendukung operasi berantai 
    public Time detikBerikutnya(){
        ++detik;
        if (detik >= 60){
            detik = 0;
            ++menit;
            if(menit>= 60){
                menit = 0;
                ++jam;
                if(jam>=24){
                    jam = 0;
                }
            }
        }
        return this; //mengembalikan instansi "this" untu mendukung operasi berantai 
    }
}

