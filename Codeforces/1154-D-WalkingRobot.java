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
    static int maxIndex(int length, int[] arr){
        int index = 0;
        for (int i = 1; i < length; i++){
            if (arr[i] > arr[index]) {
                index = i;
            }
        }
        return index;
    }
    static int minIndex(int length, int[] arr){
        int index = 0;
        for (int i = 1; i < length; i++){
            if (arr[i] < arr[index]) {
                index = i;
            }
        }
        return index;
    }
    static int minOf(int a, int b){
        if (a > b) return b;
        else return a;
    }
    static int maxOf(int a, int b){
        if (a < b) return b;
        else return a;
    }
    public static void main(String[] args) {
        FastReader S = new FastReader();
        int n = S.nextInt();
        int b = S.nextInt();
        int aMax = S.nextInt();
        int[] segments = new int [n];
        for (int i = 0; i < n; i++){
            segments[i] = S.nextInt();
        }
        int ans = 0;
        int a = aMax;
        while ((b > 0 || a > 0) && ans < n) {
            if (segments[ans] == 1){
                if (b != 0 && a < aMax) {
                    b--;
                    a++;
                }
                else a--;
            } else {
                if (a != 0) a--;
                else b--;
            }
            ans++;
        }
        System.out.println(ans);
    }
}
