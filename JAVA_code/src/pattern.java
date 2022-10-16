import java.util.Scanner;

class pattern {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        diamond(n);
    }

    static void diamond(int n) {

        // hollow diamond
        for (int i = -n; i <= n; i++) {
            for (int j = -n; j <= n; j++) {
                if ((Math.abs(i) + Math.abs(j)) >= n)
                    System.out.print("* ");
                else
                    System.out.print("  ");

            }
            System.out.println();
        }

        // diamond border
        for (int i = -n; i <= n; i++) {
            for (int j = -n; j <= n; j++) {
                if ((Math.abs(i) + Math.abs(j)) == n)
                    System.out.print("* ");
                else
                    System.out.print("  ");

            }
            System.out.println();
        }

        // filled diamond
        for (int i = -n; i <= n; i++) {
            for (int j = -n; j <= n; j++) {
                if ((Math.abs(i) + Math.abs(j)) <= n)
                    System.out.print("* ");
                else
                    System.out.print("  ");

            }
            System.out.println();
        }

    }

}