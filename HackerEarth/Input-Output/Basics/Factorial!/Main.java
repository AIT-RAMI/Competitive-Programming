import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        int N = S.nextInt();
        System.out.println(fact(N));
    }
    public static int fact(int N){
        if (N == 0) return 1;
        else {
            BigInteger ans = BigInteger.ONE;
            BigInteger mul = BigInteger.ONE;
            for (int i = 1; i <= N; i++, mul = mul.add(BigInteger.ONE)) {
                ans = ans.multiply(mul);
            }
            return ans.intValue();
        }
    }
}
