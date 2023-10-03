/**
 * Program uji untuk kelas Time
 */

public class TestTime {
    public static void main(String[]args){
        //uji konstruktor dan toString()
        Time w1 = new Time (1, 2, 3); //toString()
        System.out.println(w1);

        Time w2 = new Time(); //konstruktor default
        System.out.println(w2);

        //uji setter dan getter
        w1.setJam(4);
        w1.setMenit(5);
        w1.setDetik(6);
        System.out.println(w1); //menjalankan toString()untuk memeriksa instansi yang sudah dimodifikasi 
        System.out.println("Jam adalah : " + w1.getJam());
        System.out.println("Menit adalah : " + w1.getMenit());
        System.out.println("Detik adalah :" + w1.getDetik());

        //ujis etTime()
        w1.setTime(58, 59, 23);
        System.out.println(w1);

        //uji detikBerikutnya() dan berantai
        System.out.println(w1.detikBerikutnya()); //mengembalikan instansi Time. memanggil toString() dari Time
        System.out.println(w1.detikBerikutnya().detikBerikutnya().detikBerikutnya()); //berantai 
    }
}
