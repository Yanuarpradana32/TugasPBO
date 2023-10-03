/**
 * Kelas point menggambarkan titik 2D pada (x,y)
 */

public class Point {
    //variabel intance privat 
    private int x,y;

    //konstruktor (overloaded)
    // membuuat intance point dengan nilai default
    public Point(){  //konstruktor default 
        this.x = 0;
        this.y = 0;
    }

    //membuat instance point dnegan nilai x dan y yang diberikan 
    public Point (int x,int y){
        this.x = x;
        this.y = y;
    }

    //getter dan sette publik 
    // mengembalikan nilai x
    public int getX(){
        return this.x;
    }

    //mengatur nlai x
    public void setX(int x){
        this.x = x;
    }

    //mengembalikan nilai y
    public int getY(){
        return this.y;
    }

    //mengatur nilai y
    public void setY(int y){
        this.y = y;
    }

    //mengembalikan String yang menjelankan dirinya sendiri dalam format "(x,y)"
    public String toString(){
        return "("+ this.x + "," + this.y +")";
    }

    //mengembalikan array int 2 elemen yang berisi x dan y 
    public int[] getXY(){
        int[] hasil = new int[2];
        hasil[0] = this.x;
        hasil[0] = this.y;
        return hasil;
    }

    //mengatur baik x maupun y
    public void setXY (int x, int y){
        this.x = x;
        this.y = y;
    }

    //mengembalikan jarak dari instansi ini ke titk (x,y) yang diberikan. dipanggil dengan p1.jarak (1,2)
    public double jarak (int x, int y){
        int selisihX = this.x - x;
        int selisihY = this.y - y;
        return Math.sqrt(selisihX*selisihX + selisihY*selisihY);
    }

    //mengembalikan jarak dari nstansi ini ke instansi titik lainnya  dipanggil dengan p1.jarak (p2)
    public double jarak (Point lainnya ){
        int selisihX = this.x - lainnya.x;
        int selisihY = this.y - lainnya.y;
        return Math.sqrt(selisihX*selisihX + selisihY*selisihY);
    }

    //mengembalikan jaak dari instansi ke titik (0,0) dipanggil dengan p1.jarak ()
    public double jarak(){
        return Math.sqrt(this.x*this.x + this.y*this.y);
    }

}