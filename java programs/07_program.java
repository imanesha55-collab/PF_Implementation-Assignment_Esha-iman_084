import java.util.Scanner;
 class Program7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String rollNo = sc.nextLine();
        double pf = sc.nextDouble();
        double ic = sc.nextDouble();
        double cg = sc.nextDouble();
        double total = pf + ic + cg;
        double average = total / 3.0;
        System.out.println("Roll No: " + rollNo);
        System.out.println("Total Marks: " + total);
        System.out.println("Average Marks: " + average);
        sc.close();
    }
}



