import java.util.Scanner;
 class Program14 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double mm = sc.nextDouble();
        double inches = mm / 25.4;
        System.out.println("Length in inches: " + inches);
        sc.close();
    }
}

