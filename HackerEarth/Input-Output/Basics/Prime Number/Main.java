import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        int N = S.nextInt();
        int prime;
        for (int i = 2; i <= N; i++) {
            prime = 1;
            for (int j = 2; j < i; j++) {
                if ( i%j == 0) {
                    prime = 0;
                    break;
                }
            }
            if (prime == 1) {
                System.out.print(i + " ");
            }
        }
    }
}
