import java.math.*;
import java.util.*;
import java.io.*;

public class Main {
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
        int N = S.nextInt();
        for (int i = 0; i < N; i++) {
            String A = S.next();
            String B = S.next();
            char[] arrA = A.toCharArray();
            char[] arrB = B.toCharArray();
            int ans = 0;
            for (char a : arrA) {
                for (int j = 0; j < B.length(); j++) {
                    if (a == arrB[j]) {
                        ans += 1;
                        arrB[j] = '_';
                        break;
                    }
                }
            }
            System.out.println(A.length() + B.length() - ans - ans);
        }
    }
}
