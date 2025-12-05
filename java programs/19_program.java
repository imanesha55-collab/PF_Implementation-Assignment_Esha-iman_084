import java.util.*;
class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int years = sc.nextInt();
    int months = years * 12;
    int days = years * 365;
    System.out.println(months + " " + days);
  }
}

