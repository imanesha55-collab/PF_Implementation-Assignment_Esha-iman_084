import java.util.*;
class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int h = sc.nextInt();
    int m = sc.nextInt();
    int s = sc.nextInt();
    int total = h * 3600 + m * 60 + s;
    System.out.println(total);
  }
}

