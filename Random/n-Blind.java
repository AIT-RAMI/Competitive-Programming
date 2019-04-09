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
        FastReader S = new FastReader();
        int n = S.nextInt();
        boolean[] prime = sieve(1000000);
        int index = 0;
        int count = 0;
        while (count < n && index < 1000000){
            index++;
            if (!prime[index]){
                count++;
            } else {
                count = 0;
            }
        }
        System.out.println("[|" + (index - n + 1) + "," + index + "|]");
    }
}
