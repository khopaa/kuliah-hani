import java.util.Scanner;
import java.util.Locale;
  
class KelilingPersegiPanjang {
  static double hitungKelilingPersegiPanjang(double p, double l) {
    double keliling = (2 * p) + (2 * l);
    return Math.round(keliling*100)/100.0;
  }
  
  public static void main(String args[]){
    Scanner input = new Scanner(System.in).useLocale(Locale.US);
       
    System.out.println("##  Program Java Keliling Persegi Panjang  ##");
    System.out.println("=============================================");
    System.out.println();
      
    double panjang, lebar;
  
    System.out.print("Input panjang persegi: ");
    panjang = input.nextDouble();
      
    System.out.print("Input lebar persegi: ");
    lebar = input.nextDouble();
    System.out.println();
   
    System.out.println("Keliling persegi panjang: "
                       +hitungKelilingPersegiPanjang(panjang,lebar));
  
    input.close();
  }
}