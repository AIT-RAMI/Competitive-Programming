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
        // int []scores = new int [5];
        float score = 500;
        int []m = new int [5];
        int []w = new int [5];
        for (int i = 0; i < 5; i++) {
            m[i] = S.nextInt();
        }
        for (int i = 0; i < 5; i++) {
            w[i] = S.nextInt();
        }
        int hs = S.nextInt();
        int hu = S.nextInt();
        float ans = 0;
        for (int i = 0; i < 5; i++){
            float temp = (float) m[i] / 250;
            ans += Math.max(0.3 * score, (1 - temp) * score - 50 * (float) w[i]);
            score += 500;
        }
        ans = ans + (hs * 100) - (hu * 50);

        System.out.println((int) ans);
    }
}
