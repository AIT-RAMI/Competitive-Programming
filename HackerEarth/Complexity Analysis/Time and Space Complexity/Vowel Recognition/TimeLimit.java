import java.math.*;
import java.util.*;
import java.io.*;
public class TimeLimit {
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
        Set<Character> vowels = new HashSet<Character>();
        vowels.add('a');
        vowels.add('e');
        vowels.add('i');
        vowels.add('o');
        vowels.add('u');
        vowels.add('A');
        vowels.add('E');
        vowels.add('I');
        vowels.add('O');
        vowels.add('U');
        int T = S.nextInt();
        long []solution = new long[T];
        long ans;
        for (int i = 0; i < T; i++) {
            ans = 0;
            String word = S.next();
            char[] _temp = word.toCharArray();
            int[] temp = new int[_temp.length];
            for (int z = 0; z < _temp.length; z++){
                if (vowels.contains(_temp[z])) temp[z] = 1;
            }
            for (int j = 0; j < temp.length; j++) {
                for (int l = 0; l < temp.length; l++) {
                    for (int k = j; k <= l; k++) {
                        ans += temp[k];
                    }
                }
            }
            solution[i] = ans;
        }
        for (int i = 0; i < T; i++) System.out.println(solution[i]);
    }
}
