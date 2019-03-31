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

    public static int product(int x){
        String temp = String.valueOf(x);
        char[] Digits = temp.toCharArray();
        int length = Digits.length;
        int ans = 1;
        for (int i = 0; i < length; i++){
            ans *= Character.getNumericValue(Digits[i]);
        }
        return ans;
    }
    public static int FindSmallest (int [] arr){
        int index = 0;
        int min = arr[index];
        for (int i=1; i<arr.length; i++){
            if (arr[i] < min ){
                min = arr[i];
                index = i;
            }
        }
        return index ;

    }
    public static void main(String[] args) {
        FastReader S = new FastReader();
        int n = S.nextInt();
        int[] array = new int[n];
        int odd = 0;
        int even = 0;
        for (int i = 0; i < n; i++){
            array[i] = S.nextInt();
            if(array[i] % 2 == 0) even += 1;
            else odd += 1;
        }
        int ans = 0;
        if (odd - even != 1 && even - odd != 1 && even != odd) {
            if (odd > even) {
                int diff = odd - even - 1;
                for (int i = 0; i < n; i++){
                    if (array[i] % 2 == 0) array[i] = (int) 1e6;
                }
                for (int i = 0; i < diff; i++){
                    int index = FindSmallest(array);
                    ans += array[index];
                    array[index] = (int) 1e6;
                }
            } else {
                int diff = even - odd - 1;
                for (int i = 0; i < n; i++){
                    if (array[i] % 2 == 1) array[i] = (int) 1e6;
                }
                for (int i = 0; i < diff; i++){
                    int index = FindSmallest(array);
                    ans += array[index];
                    array[index] = (int) 1e6;
                }
            }
        }
        System.out.println(ans);
    }
}
