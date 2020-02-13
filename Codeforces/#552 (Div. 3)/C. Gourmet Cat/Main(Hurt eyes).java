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
        int days;
        int _a;
        int _b;
        int _c;

        //Day1
        days = Days; _a = arr[0]; _b = arr[1]; _c = arr[2];
        while (true) {
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_b != 0) {
                _b--;
                days++;
            } else break;
            if (_c != 0) {
                _c--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_c != 0) {
                _c--;
                days++;
            } else break;
            if (_b != 0) {
                _b--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
        }
        maxDays = Math.max(days, maxDays);

        //Day2
        days = Days; _a = arr[0]; _b = arr[1]; _c = arr[2];
        while (true) {
            if (_b != 0) {
                _b--;
                days++;
            } else break;
            if (_c != 0) {
                _c--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_c != 0) {
                _c--;
                days++;
            } else break;
            if (_b != 0) {
                _b--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
        }
        maxDays = Math.max(days, maxDays);

        //Day3
        days = Days; _a = arr[0]; _b = arr[1]; _c = arr[2];
        while (true) {
            if (_c != 0) {
                _c--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_c != 0) {
                _c--;
                days++;
            } else break;
            if (_b != 0) {
                _b--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_b != 0) {
                _b--;
                days++;
            } else break;
        }
        maxDays = Math.max(days, maxDays);

        //Day4
        days = Days; _a = arr[0]; _b = arr[1]; _c = arr[2];
        while (true) {
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_c != 0) {
                _c--;
                days++;
            } else break;
            if (_b != 0) {
                _b--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_b != 0) {
                _b--;
                days++;
            } else break;
            if (_c != 0) {
                _c--;
                days++;
            } else break;
        }
        maxDays = Math.max(days, maxDays);

//Day5
        days = Days; _a = arr[0]; _b = arr[1]; _c = arr[2];
        while (true) {
            if (_c != 0) {
                _c--;
                days++;
            } else break;
            if (_b != 0) {
                _b--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_b != 0) {
                _b--;
                days++;
            } else break;
            if (_c != 0) {
                _c--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
        }
        maxDays = Math.max(days, maxDays);

//Day6
        days = Days; _a = arr[0]; _b = arr[1]; _c = arr[2];
        while (true) {
            if (_b != 0) {
                _b--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_b != 0) {
                _b--;
                days++;
            } else break;
            if (_c != 0) {
                _c--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_c != 0) {
                _c--;
                days++;
            } else break;
        }
        maxDays = Math.max(days, maxDays);

//Day7
        days = Days; _a = arr[0]; _b = arr[1]; _c = arr[2];
        while (true) {
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_b != 0) {
                _b--;
                days++;
            } else break;
            if (_c != 0) {
                _c--;
                days++;
            } else break;
            if (_a != 0) {
                _a--;
                days++;
            } else break;
            if (_c != 0) {
                _c--;
                days++;
            } else break;
            if (_b != 0) {
                _b--;
                days++;
            } else break;
        }
        maxDays = Math.max(days, maxDays);

        System.out.println(maxDays);
    }
}
