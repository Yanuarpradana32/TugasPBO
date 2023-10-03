/**
 * Program pengujian untuk kelas Circle
 */
public class TestCircle {    
   public static void main(String[] args) {   
      // Uji semua konstruktuor dan toString()
      Circle c1 = new Circle(2.0, "Biru");
      System.out.println(c1); //untuk menjalankan toString()

      Circle c2 = new Circle(2.2);
      System.out.println(c2);

      Circle c3 = new Circle();
      System.out.println(c3);

      //Uji Setters dan Getters 
      c1.setRadius(3.3);
      c1.setWarna("hijau");
      System.out.println(c1); //gunakan toString() untuk memeriksa instansi yang dimodifikasi
      System.out.println("Radius adalah " + c1.getRadius());
      System.out.println("Warnanya adalah " + c1.getWarna());

      //Uji getLuas() dan getKeliling()
      System.out.printf("Luasnya adalah : %.2f%n", c1.getLuas());
      System.out.printf("Kelilingnya adalah : %.2f%n", c1.getKeliling());

   }

      
}