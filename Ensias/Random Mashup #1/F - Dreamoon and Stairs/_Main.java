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

    public static void main(String[] args) {
        FastReader S = new FastReader();
        int n = S.nextInt();
        int m = S.nextInt();
        int min = n / 2;
        if (n % 2 == 0) {
            while (min % m != 0 && min <= n) {
                min += 1;
                if (min % m == 0) {
                    break;
                }
            }
        } else {
            do {
                min += 1;
                if (min % m == 0) {
                    break;
                }
            } while (min % m != 0 && min <= n);
        }

        if (min <= n) System.out.println(min);
        else System.out.println(-1);
    }
}
