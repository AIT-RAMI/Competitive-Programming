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
        int primeNumbers[] = new int[200] ;
        int count = 0;
        for (int i = 0; i < 200; i++){
            boolean isPrime = true;
            for (int j = 2; j < i; j++ ){
                if (j % i == 0) {
                    isPrime = false;
                    break;
                }
                if (isPrime) {
                    primeNumbers[count] = i;
                    count += 1;
                }
            }
        }/*
        for (int i = 0; i < N; i++) {
            int L = S.nextInt();



        }*/
    }
}
