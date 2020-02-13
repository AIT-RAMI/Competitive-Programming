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
        int Q = S.nextInt();
        int []array = new int[N];
        for (int i = 0; i < N; i++){
            array[i] = S.nextInt();
        }
        int []ans = new int[Q];
        int numberAns = -1;
        for (int i = 0; i < Q; i++){
            int type = S.nextInt();
            int X = S.nextInt();
            int Y = S.nextInt();
            if (type == 1) {
                array[X] = Y;
            } else {
                numberAns += 1;
                if (X <= Y) {
                    int sum = 0;
                    for (int j = X; j <= Y; j++){
                        sum += array[j];
                    }
                    ans[numberAns] = sum;
                } else ans[numberAns] = -1;
            }
        }
        for (int  i = 0; i < numberAns + 1; i++){
            System.out.println(ans[i] + " ");
        }
    }
}
