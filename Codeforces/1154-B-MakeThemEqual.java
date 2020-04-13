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
    public static void main(String[] args) {
        FastReader S = new FastReader();
        int N = S.nextInt();
        int num = 1;
        int []numbers = new int[3];
        numbers[0] = S.nextInt();
        for (int i = 1; i < N; i++){
            int a = S.nextInt();
            if (num == 1 && a != numbers[0]){
                numbers[1] = a;
                num++;
            }
            if (num == 2) if (a!= numbers[1] && a!= numbers[0]) {
                numbers[2] = a;
                num++;
            }
            if (num == 3) if (a!= numbers[2] && a!= numbers[1] && a != numbers[0]){
                num++;
                break;
            }
        }
        if (num > 3) System.out.println(-1);
        else {
            if (num == 1){
                System.out.println(0);
            }
            else {
                int max = maxIndex(num, numbers);
                int min = minIndex(num, numbers);
                int diff = numbers[max] - numbers[min];
                if (num == 2){
                    if (diff % 2 == 0) {
                        System.out.println(diff/2);
                    } else System.out.println(diff);
                } else {
                    int medium = 3 - max - min;
                    if (diff % 2 == 0 && (numbers[min] + (diff / 2) == numbers[medium])) {
                        System.out.println(diff/2);
                    } else System.out.println(-1);
                }
            }
        }
    }
}
