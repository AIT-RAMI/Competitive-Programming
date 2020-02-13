import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        int a = S.nextInt();
        int b = S.nextInt();
        int d = b/a;
        if (b % a != 0 || a > b) {
            System.out.println(-1);
        } else {
            int result = 0;
            while ( d%2 == 0) {
                d = d/2;
                result += 1;
            }
            while ( d%3 == 0) {
                d = d/3;
                result += 1;
            }
            if (d != 1) {
                System.out.println(-1);
            } else {
                System.out.println(result);
            }
        }
    }
}
