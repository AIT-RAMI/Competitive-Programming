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
        int[] arr = new int [3];
        int Days = 0;
        for (int i = 0; i < 3; i++){
            arr[i] = S.nextInt();
        }
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < 3; i++){
            if (i == 0) min = minOf(min, arr[i] / 3);
            else min = minOf(min, arr[i] / 2);
        }
        Days += 7*min;
        for (int i = 0; i < 3; i++){
            if (i == 0) arr[i] -= 3*min;
            else arr[i] -= 2*min;
        }
        int maxDays = 0;
        for (int firstDay = 0; firstDay < 7; firstDay++){
            int days = 0;
            int a = arr[0]; int b = arr[1]; int c = arr[2];
            for (int day = firstDay;; day++){
                day = day % 7;
                if (day == 0) if (a == 0) break; else {a--; days++;}
                if (day == 1) if (b == 0) break; else {b--; days++;}
                if (day == 2) if (c == 0) break; else {c--; days++;}
                if (day == 3) if (a == 0) break; else {a--; days++;}
                if (day == 4) if (c == 0) break; else {c--; days++;}
                if (day == 5) if (b == 0) break; else {b--; days++;}
                if (day == 6) if (a == 0) break; else {a--; days++;}
            }
            maxDays = maxOf(days, maxDays);
        }
        System.out.println(Days + maxDays);
    }
}
