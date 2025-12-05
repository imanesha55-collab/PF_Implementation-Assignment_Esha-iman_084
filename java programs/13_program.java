		Area=?R2 
import java.util.Scanner;
 class Program13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double pi = 3.1417;
        double r = sc.nextDouble();
        double area = pi * r * r;
        System.out.println("Area of circle: " + area);
        sc.close();
    }
}

