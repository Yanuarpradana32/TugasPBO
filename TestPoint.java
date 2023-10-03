/**
 * Sebuah pengujian untuk kelas point
 */

public class TestPoint {
    public static void main(String[]args){
        //uji konstruktor dan toString()
        Point p1 = new Point (1,2);
        System.out.println(p1); //toString()
        Point p2 = new Point(); // konstruktor default
        System.out.println(p2);

        //uji setter dan getter
        
        System.out.println(p1); //menjalanakan toString() untuk memeriksa instansi yang telah dimodifikasi 
        System.out.println("Nilai X adalah : " + p1.getX());
        System.out.println("Nilai Y adalah : " + p1.getY());

        //uji setXY() dan getXY()
      
        System.out.println(p1);   //toString()
        System.out.println("Nilai X adalah: " + p1.getXY()[0]);
        System.out.println("Nilai Y adalah: " + p1.getXY()[1]);

        //uji 3 versi overloaded dari distance()
        p2.setXY (10,11);
        System.out.printf("Jarak adalah: %.2f%n", p1.jarak(10, 11));
        System.out.printf("Jarak adalah: %.2f%n", p1.jarak(p2));
        System.out.printf("Jarak adalah: %.2f%n", p2.jarak(p1));
        System.out.printf("Jarak adalah: %.2f%n", p1.jarak());

    }
    
}