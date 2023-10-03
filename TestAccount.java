/**
 * sebuah pengujian kelas Acc
 */
public class TestAccount {
    public static void main (String[] args){
        //uji konstruktor dan toString()
        Account a1 = new Account (5566);
        System.out.println(a1);
        Account a2 = new Account(1234, 99.9);
        System.out. println(a2);

        //uji getter
        System.out.println("Nomor akun adalah : " +a2.getNomor());
        System.out.println("Saldo adalah : " + a2.getSaldo());

        //uji kredit, debit, dan tranfers ke
        a1.kredit(11.1);
        System.out.println(a1);

        a1.debit(5.5);
        System.out.println(a1);

        a1.debit(500);
        System.out.println(a1);

        a2.transferKe(1.0,a1);
        System.out.println(a1);
        System.out.println(a2);
    }
}
