public class HitungPersegiPanjang {

    public static void main(String[] args) {
        // Deklarasi variabel panjang dan lebar
        double panjang, lebar;

        // Meminta input panjang dan lebar dari pengguna
        Scanner scanner = new Scanner(System.in);
        System.out.print("Masukkan panjang persegi panjang: ");
        panjang = scanner.nextDouble();
        System.out.print("Masukkan lebar persegi panjang: ");
        lebar = scanner.nextDouble();

        // Menghitung luas persegi panjang
        double luas = panjang * lebar;

        // Menghitung keliling persegi panjang
        double keliling = 2 * (panjang + lebar);

        // Menampilkan hasil perhitungan luas dan keliling
        System.out.println("Luas persegi panjang dengan panjang " + panjang + " dan lebar " + lebar + " adalah " + luas);
        System.out.println("Keliling persegi panjang dengan panjang " + panjang + " dan lebar " + lebar + " adalah " + keliling);
    }
}