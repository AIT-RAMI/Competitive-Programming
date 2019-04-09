import java.math.*;
import java.util.*;
import java.io.*;

public class _Main {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
        public FastReader() {
            br = new BufferedReader(new
                    InputStreamReader(System.in));
        }
        String next() {
            while (st == null || !st.hasMoreElements()){
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException  e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
        int nextInt() {
            return Integer.parseInt(next());
        }
        long nextLong() {
            return Long.parseLong(next());
        }
        double nextDouble() {
            return Double.parseDouble(next());
        }
        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
    static boolean[] sieve(int N){
        boolean[] prime = new boolean[N + 1];
        java.util.Arrays.fill(prime, true);
        prime[0] = false;
        prime[1] = false;
        for (int i = 2; i*i < N + 1; i++){
            if (prime[i]) {
                for (int j = 2; i*j < N+1; j++) {
                    prime[i*j] = false;
                }
            }
        }
        return prime;
    }
    public static int product(int x){
        String temp = String.valueOf(x);
        char[] Digits = temp.toCharArray();
        int length = Digits.length;
        int ans = 1;
        for (int i = 0; i < length; i++){
            ans *= Character.getNumericValue(Digits[i]);
        }
        return ans;
    }
    public static int FindSmallest (int [] arr){
        int index = 0;
        int min = arr[index];
        for (int i=1; i<arr.length; i++){
            if (arr[i] < min ){
                min = arr[i];
                index = i;
            }
        }
        return index ;

    }
    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        String encrypted = "wi dylu tivt biwi a ab";
        for (int d = 0; d < 26; d++) {
            System.out.println("d = " + d);

            for (int i = 0; i < encrypted.length(); i++) {
                if (encrypted.charAt(i) != ' ') {
                    if (encrypted.charAt(i) + d > 123) {
                        System.out.print(Character.toString((char) (encrypted.charAt(i) + d - 26)));
                    } else {
                        System.out.print(Character.toString((char) (encrypted.charAt(i) + d)));
                    }
                } else System.out.print(" ");
            }
            System.out.println();
        }
    }
}
