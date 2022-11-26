import java.util.Scanner;

public class MAtrixPath {

    static int n, m;

    // ----------------------------!1----------------------------------------
    // static int a[] = new int[100];

    // static int ways(int x, int y, int a[]) {
    // // edges
    // if (x == m || y == n)
    // return 1;
    // // restriction
    // for (int i = 0; i < a.length; i += 2) {

    // // first case of having no movement as all but then again won't work
    // // if (a.length >= 4) {
    // // if ((a[i] == x && a[i + 1] == y + 1) && (a[i + 2] == x + 1 && a[i + 3] ==
    // y))
    // // return 0;
    // // }

    // if (a[i] == x && a[i + 1] == y + 1) {
    // return ways(x + 1, y, a);
    // }
    // if (a[i] == x + 1 && a[i + 1] == y) {
    // return ways(x, y + 1, a);
    // }

    // }
    // return ways(x + 1, y, a) + ways(x, y + 1, a);
    // }

    // public static void main(String[] args) {
    // Scanner sc = new Scanner(System.in);
    // System.out.println("Enter matrix size");
    // m = sc.nextInt();// no of rows
    // n = sc.nextInt();// no of columns
    // System.out.println("Enter number of restrictions");
    // int o = sc.nextInt();
    // int a[] = new int[2 * o];
    // for (int i = 0; i < 2 * o; i += 2) {
    // a[i] = sc.nextInt();
    // a[i + 1] = sc.nextInt();
    // }
    // // int k = 0;
    // // for (int i = 0; i < 2 * o; i += 2) {
    // // if (a[i] == 1 && a[i + 1] == 2 || a[i] == 2 && a[i + 1] == 1 || a[i] == m
    // - 1
    // // && a[i + 1] == n
    // // || a[i] == m && a[i + 1] == n - 1)
    // // k++;
    // // }
    // // if (k % 2 == 0) {
    // // System.out.println("0");
    // // return;
    // // }
    // System.out.println(ways(1, 1, a));
    // }

    // ------------------------!2-----------------------
    static int ways(int x, int y, int a[][]) {
        if (x == n - 1 || y == m - 1)
            return 1;

        if (a[x + 1][y] == 1 && a[x][y + 1] == 1)
            return 0;
        if (a[x + 1][y] == 1)
            return ways(x, y + 1, a);

        if (a[x][y + 1] == 1)
            return ways(x + 1, y, a);

        return ways(x + 1, y, a) + ways(x, y + 1, a);

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        int a[][] = new int[n][m];
        System.out.println("Enter matrix");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                a[i][j] = sc.nextInt();
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print(a[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println("Ways =" + ways(1, 1, a));
    }

}
