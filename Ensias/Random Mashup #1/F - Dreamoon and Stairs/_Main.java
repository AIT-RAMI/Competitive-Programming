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
        int k = S.nextInt();
        int []w = new int[n];
        for (int i = 0; i < n; i++){
            w[i] = S.nextInt();
        }
        int []c = new int[n];
        for (int i = 0; i < n; i++){
            c[i] = 0;
        }
        int days = 0;
        boolean used = true;
        while (true) {
            days += 1;
            for (int i = 0; i < n; i++){
                if (c[i] < w[i]) {
                    c[i] += k;
                    break;
                }
            }
            for (int i = 0; i < n; i++){
                if (c[i] < w[i]) {
                    c[i] += k;
                    break;
                }
                if (i == n - 1) {
                    used = false;
                }
            }
            if (!used) break;
        }
        System.out.println(days);
    }
}
