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
        String message = S.next();
        int key = S.nextInt();
        StringBuilder encrypted = new StringBuilder();
        for (char m : message.toCharArray()) {
            int a = (int) m;
            if (a > 64 && a < 91) {
                a += key % 26;
                if (a > 90) a -= 26;
            } else if (a > 96 && a < 123) {
                a += key % 26;
                if (a > 122) a -= 26;
            } else if ((a > 47 &&  a < 58)) {
                a += key % 10;
                if (a > 57 && a < 65) a -= 10;
            }
            m = (char) a;
            encrypted.append(m);
        }
        System.out.println(encrypted);
    }
}
