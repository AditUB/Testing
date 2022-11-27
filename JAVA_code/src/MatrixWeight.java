import java.util.Scanner;
// import java.math.*;

public class MatrixWeight {

    static int n, m;

    static int bestWays(int x, int y, int a[][]) {
        if (x == n - 1 && y == m - 1)
            return a[x][y];
        if (x == n - 1)
            return a[x][y] + bestWays(x, y + 1, a);
        if (y == m - 1)
            return a[x][y] + bestWays(x + 1, y, a);

        // if (a[x + 1][y] == 1 && a[x][y + 1] == 1)
        // return 0;

        return a[x][y] + Math.max(bestWays(x + 1, y, a), bestWays(x, y + 1, a));

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

        System.out.println("Best ways coin collected =" + bestWays(0, 0, a));
    }

}
