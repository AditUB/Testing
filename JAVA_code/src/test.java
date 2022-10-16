
import java.util.Scanner;

public class test {

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        test obj = new test();

        System.out.println("Hello");
        int a = sc.nextInt();
        System.out.print(a);

        obj.dumm();
    }

    public void dumm() {
        System.out.println("Hi");
    }
}