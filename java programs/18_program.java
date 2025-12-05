import java.util.*;
class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    double vi = sc.nextDouble();
    double a = sc.nextDouble();
    double t = sc.nextDouble();
    double s = vi * t + 0.5 * a * t * t;
    System.out.println(s);
  }
}

