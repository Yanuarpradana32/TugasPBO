/*
 * Pengujian untuk kelas Date 
 */


public class TestDate{
    public static void main(String[] args) {
        //uji konstruktor dan toString()
        Date d1 = new Date(2020,2, 8);
        System.out.println(d1);

        //uji setter dan getter 
        d1.setTahun (2012);
        d1.setBulan (12);
        d1.setHari (23);
        System.out.println(d1);
        System.out.println("Tahun is: " + d1.getTahun());
        System.out.println("Bulan is: " + d1.getBulan());
        System.out.println("Hari is: " + d1.getHari());

        //uji setDate()
        d1.setDate(2988, 1, 2);
        System.out.println(d1);

    }
}