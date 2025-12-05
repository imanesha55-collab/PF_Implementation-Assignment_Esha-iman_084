import java.util.Scanner;
 class Program12 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double pi = 3.1417;
        double r = sc.nextDouble();
        double h = sc.nextDouble();
        double volume = pi * r * r * h;
        System.out.println("Volume of cylinder: " + volume);
        sc.close();
    }
}

