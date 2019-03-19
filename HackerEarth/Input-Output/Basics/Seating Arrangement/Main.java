import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        int N = S.nextInt();
        int[] Numbers = new int[N];
        for (int i = 0; i < N; i++) {
            Numbers[i] = S.nextInt();
        }
        for (int i = 0; i < N; i++) {
            int n = Numbers[i] % 12;
            if (n == 0) n = 12;
            System.out.print(Numbers[i] - 2*n + 13);
            n = n % 6;
            if (n == 0 || n == 1) {
                System.out.println(" WS");
            } else if (n == 5 || n == 2) {
                System.out.println(" MS");
            } else {
                System.out.println(" AS");
            }
        }
    }
}
