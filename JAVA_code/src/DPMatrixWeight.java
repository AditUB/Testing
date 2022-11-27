import java.util.Scanner;
// import java.util.Arrays;

public class DPMatrixWeight {

    static int n, m;
    static int table[][] = new int[1000][1000];

    static int bestWays(int x, int y, int a[][]) {

        if (table[x][y] == -1000) {

            if (x == n - 1 && y == m - 1) {
                table[x][y] = a[x][y];
                return table[x][y];
            }

            if (x == n - 1) {
                table[x][y] = a[x][y] + bestWays(x, y + 1, a);
                return table[x][y];
            }

            if (y == m - 1) {
                table[x][y] = a[x][y] + bestWays(x + 1, y, a);
                return table[x][y];
            }

            table[x][y] = a[x][y] + Math.max(bestWays(x + 1, y, a), bestWays(x, y + 1, a));
            return table[x][y];
        } else {

            if (x == n - 1 || y == m - 1)
                return table[x][y];

            return a[x][y] + Math.max(table[x + 1][y], table[x][y + 1]);
        }

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
        for (int i = 0; i < 1000; i++) {
            for (int j = 0; j < 1000; j++) {
                table[i][j] = -1000;
            }
        }

        System.out.println("Best ways coin collected =" + bestWays(0, 0, a));
    }

}
