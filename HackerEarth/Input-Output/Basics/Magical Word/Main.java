import java.lang.reflect.Array;
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
    public static void main(String[] args) {
        FastReader S = new FastReader();
        boolean []prime = sieve(200);

        int T = S.nextInt();
        int length;
        String word;
        String[] encrypted = new String[T];

        for (int i = 0; i < T; i++){
            length = S.nextInt();
            word = S.next();

            char[] temp = word.toCharArray();
            for(int j = 0; j < length; j++) {
                int up = (int) temp[j];
                int down = (int) temp[j];
                while (true) {
                    if ((down > 64 && down < 91) || (down > 96 && down < 123)) {
                        if (prime[down]) {
                            temp[j] = (char) down;
                            break;
                        }
                    }
                    if ((up > 64 && up < 91) || (up > 96 && up < 123)) {
                        if (prime[up]) {
                            temp[j] = (char) up;
                            break;
                        }
                    }
                    down--;
                    up++;
                }
            }

            encrypted[i] = new String(temp);
        }

        for (int i = 0; i < T; i++) {
            System.out.println(encrypted[i]);
        }

    }
}
