import java.util.Scanner;
 class Program5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int sum = a + b;
        int product = a * b;
        System.out.println("Sum = " + sum);
        System.out.println("Product = " + product);
        sc.close();
    }
}

