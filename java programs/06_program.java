import java.util.Scanner;
 class Program6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int years = sc.nextInt();
        int months = years * 12;
        System.out.println("Your age in months is: " + months);
        sc.close();
    }
}

