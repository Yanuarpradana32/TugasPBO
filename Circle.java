/**
 * Kelas Circle menggambarkan Lingkaran dengan radius dan warna
 */

 public class Circle{   //simpan sebagai "Circle.java"
   //Konstanta publik
   public static final double DEFAULT_RADIUS = 1.0;
   public static final String DEFAULT_WARNA  = "Merah";

   //Variabel instance pribadi
   private double radius;
   private String warna;

   //Konstruktor (oveloaded)
   // Membuat objek  circle dengan radius dan waran 
   public Circle(){                 //konstruktor pertama 
      this.radius = DEFAULT_RADIUS;
      this.warna  = DEFAULT_WARNA;
   }

   //Membuat objek Circle dengan radius tertentu dan warna default
   public Circle(double radius){ //konstruktor kedua
      this.radius = radius;
      this.warna  = DEFAULT_WARNA; 
   }

   //Membuat objek circle dengan radius dan warna tertentu
   public Circle(double radius, String warna ){ //konstruktor ketiga
      this.radius = radius;
      this.warna  = warna;
   }

   //Mengembalikan nilai rdius metode setter untuk variabel radius
   public double getRadius(){
      return this.radius;
   }

   //Mengatur nilai radius metode setter untuk variabel radius 
   public void setRadius(double radius){
      this.radius = radius;
   } 

   //Mengembalikan warna metode getter untuk variabel color
   public String getWarna(){
      return this.warna;
   }

   //Mengatur warna metode setter untuk variabel warna
   public void setWarna(String warna){
      this.warna = warna;
   }

   //Mengembalikan string yang menjelaskan objek Circle
   public String toString(){
      return "Lingkaran [radius =" + radius + ", warna = " + warna + "]";
   }

   //mengembalikan luas dari circle
   public double getLuas(){
      return radius * radius * Math.PI;
   }

   //Mengambalikan keliling dari circle 
   public double getKeliling(){
      return 2.0 * radius * Math.PI;
   }
 }