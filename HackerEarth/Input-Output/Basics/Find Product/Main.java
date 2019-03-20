import java.util.*;

class Main {
    public static void main(String args[] ) throws Exception {
        Scanner S = new Scanner(System.in);
        int N = S.nextInt();
        long [] Numbers = new long[N];
        for (int i = 0; i < N; i++) {
            Numbers[i]= S.nextInt();
        }
        long result = 1;
        for (int i = 0; i < N; i++) {
            result = ((result % 1000000007) * (Numbers[i] % 1000000007)) % 1000000007;
        }
        System.out.print(result);
        
    }
}
