import java.util.*;
class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    double r = sc.nextDouble();
    double pi = 3.141592653589793;
    double area = pi * r * r;
    double circumference = 2 * pi * r;
    System.out.println(area + " " + circumference);
  }
}

