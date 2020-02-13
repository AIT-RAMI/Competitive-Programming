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
        long d = 0;
        for (int i = 0; i < n; i++){
            double temp = (double) w[i] / k;
            if (temp == (double) Math.floor(temp)) d+= temp;
            else d += Math.floor(temp) + 1;
        }
        if (d % 2 == 0) System.out.println(d/2);
        else System.out.println((d/2) + 1);

/*
        int type = 0;
        int quantity = 0;
        int days = 0;
        while (type < n) {
            days += 1;
            if (w[type] > quantity) quantity += k;
            else {
                type += 1;
                quantity = 0;
            }
            if (type < n) {
                if (w[type] > quantity) quantity += k;
                else {
                    type += 1;
                    quantity = 0;
                }
            }
        }
        System.out.println(days);*/
    }
}
