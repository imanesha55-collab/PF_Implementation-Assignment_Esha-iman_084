import java.util.Scanner;
class Program9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        int max = Math.max(Math.max(a, b), Math.max(c, d));
        System.out.println("Maximum number is: " + max);
        sc.close();
    }
}

