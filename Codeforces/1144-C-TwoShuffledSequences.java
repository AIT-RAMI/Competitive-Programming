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
        for (int i = 0; i < n; i++){
            array[i] = S.nextInt();
        }
        Arrays.sort(array);
        int ans = 0;
        for (int i = 2; i < n; i ++){
            if (array[i] == array[i - 2]) {
                ans = 1;
                break;
            }
        }
        if (ans == 1) System.out.println("NO");
        else {
            System.out.println("YES");
            Set<Integer> inc = new HashSet<Integer>();
            int[] arr = new int[n];
            int index = 0;
            for (int i = n - 1; i >= 0; i--){
                if (!inc.contains(array[i])) {
                    inc.add(array[i]);
                    arr[index] = array[i];
                    index += 1;
                    array[i] = -1;
                }
            }
            System.out.println(n - inc.size());
            for (int i = 0; i < n; i++){
                if (array[i] != -1) {
                    System.out.print(array[i] + " ");
                }
            }
            System.out.println();
            System.out.println(inc.size());

            for (int i = 0; i < index; i++){
                System.out.print(arr[i] + " ");
            }
        }
    }
}
