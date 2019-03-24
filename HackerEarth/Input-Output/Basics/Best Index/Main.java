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
        int[] A = new int[N];
        for (int i =0; i < N; i++) {
            A[i] = S.nextInt();
        }
        long ans = (int) - Math.pow(10,7);
        for (int j = 0; j < N; j++) {
            long sum = 0;
            int index = j;
            int count = 0;
            while (index + count < N) {
                for (int i = 0; i < count + 1; i++) {
                    sum += A[index + i];
                }
                count += 1;
                index += count;
            }
            if (sum > ans) ans = sum;
        }
        System.out.println(ans);
    }
}
