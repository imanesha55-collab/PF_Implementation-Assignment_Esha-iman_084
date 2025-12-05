import java.util.*;
class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    double m1 = sc.nextDouble();
    double m2 = sc.nextDouble();
    double m3 = sc.nextDouble();
    double m4 = sc.nextDouble();
    double m5 = sc.nextDouble();
    double total = m1 + m2 + m3 + m4 + m5;
    double avg = total / 5;
    System.out.println(total + " " + avg);
  }
}

