import java.io.*;
import java.util.*;

import javax.sound.midi.Soundbank;

public class Reader { 
  public static void main(String[] args) throws FileNotFoundException {
    // InputStream in = new FileInputStream("filename.in");
    // Scanner reader = new Scanner(in);
    // Using FAST IO
    InputReader reader = new InputReader(System.in);
    StringBuilder sb = new StringBuilder();
    int n = reader.nextInt();
    int x = reader.nextInt();
    int[] arr = new int[n];
    for(int i = 0; i < n; i++) {
      arr[i] = reader.nextInt();  
    }
    int start = 0;
    long sum = 0;
    int ans = 0;
    for(int i = 0; i < n; i++) {
      sum += arr[i];
      while (sum > x && start < i) {
        sum -= arr[start];
        start++;
      }
      if (sum == x) ans++;
    }
    System.out.print(ans);
  }
}

class Pair {
  public int x;
  public int y;
  public Pair(int x, int y) {
    this.x = x;
    this.y = y;
  }
  @Override
  public boolean equals(Object obj) {
      Pair p = (Pair) obj;
      return this.x == p.x && this.y == p.y;
  }
  @Override
  public int hashCode() {
    byte var1 = 7;
    int var2 = 31 * var1 + x;
    var2 = 31 * var2 + y;
    return var2;
  }
}

// FAST IO

class InputReader  {

  private InputStream stream;
  private static final int DEFAULT_BUFFER_SIZE = 1 << 16;
  private static final int EOF = -1;
  private byte[] buf = new byte[DEFAULT_BUFFER_SIZE];
  private int curChar;
  private int numChars;

  public InputReader(InputStream stream) {
    this.stream = stream;
  }

  public int[] readIntArray(int tokens) {
    int[] ret = new int[tokens];
    for (int i = 0; i < tokens; i++) {
      ret[i] = nextInt();
    }
    return ret;
  }

  public int read() {
    if (this.numChars == EOF) {
      throw new UnknownError();
    } else {
      if (this.curChar >= this.numChars) {
        this.curChar = 0;

        try {
          this.numChars = this.stream.read(this.buf);
        } catch (IOException ex) {
          throw new InputMismatchException();
        }

        if (this.numChars <= 0) {
          return EOF;
        }
      }

      return this.buf[this.curChar++];
    }
  }

  public int nextInt() {
    int c;
    for (c = this.read(); isSpaceChar(c); c = this.read()) {
    }

    byte sgn = 1;
    if (c == 45) {
      sgn = -1;
      c = this.read();
    }

    int res = 0;

    while (c >= 48 && c <= 57) {
      res *= 10;
      res += c - 48;
      c = this.read();
      if (isSpaceChar(c)) {
        return res * sgn;
      }
    }

    throw new InputMismatchException();
  }

  public long nextLong() {
    int c;
    for (c = this.read(); isSpaceChar(c); c = this.read()) {
    }

    byte sgn = 1;
    if (c == 45) {
      sgn = -1;
      c = this.read();
    }

    long res = 0;

    while (c >= 48 && c <= 57) {
      res *= 10L;
      res += c - 48;
      c = this.read();
      if (isSpaceChar(c)) {
        return res * sgn;
      }
    }
    throw new InputMismatchException();
  }

  public double nextDouble() {
    double ret = 0, div = 1;
    int c = read();
    while (c <= ' ') {
      c = read();
    }
    boolean neg = (c == '-');
    if (neg) {
      c = read();
    }

    do {
      ret = ret * 10 + c - '0';
    }
    while ((c = read()) >= '0' && c <= '9');

    if (c == '.') {
      while ((c = read()) >= '0' && c <= '9') {
        ret += (c - '0') / (div *= 10);
      }
    }

    if (neg) {
      return -ret;
    }
    return ret;
  }

  public String next() {
    int c;
    while (isSpaceChar(c = this.read())) {
    }

    StringBuilder result = new StringBuilder();
    result.appendCodePoint(c);

    while (!isSpaceChar(c = this.read())) {
      result.appendCodePoint(c);
    }

    return result.toString();
  }

  public String nextLine() {
    int c;
    StringBuilder result = new StringBuilder();
    boolean read = false;
    while ((c = this.read()) != '\n') {
      if (c == -1) {
        return null;
      }
      result.appendCodePoint(c);
      read = true;
    }
    if (!read) {
      return null;
    }
    return result.toString();
  }

  public static boolean isSpaceChar(int c) {
    return c == 32 || c == 10 || c == 13 || c == 9 || c == EOF;
  }

  public int[] nextIntArray(int n) {
    int[] arr = new int[n];
    for (int i = 0; i < n; i++) {
      arr[i] = nextInt();
    }
    return arr;
  }

  public long[] nextLongArray(int n) {
    long[] arr = new long[n];
    for (int i = 0; i < n; i++) {
      arr[i] = nextLong();
    }
    return arr;
  }

  public int[][] nextIntMatrix(int n, int m) {
    int[][] arr = new int[n][m];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        arr[i][j] = nextInt();
      }
    }
    return arr;
  }

  public long[][] nextLongMatrix(int n, int m) {
    long[][] arr = new long[n][m];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        arr[i][j] = nextLong();
      }
    }
    return arr;
  }

  public char[] nextCharArray() {
    return next().toCharArray();
  }

  public double[] nextDoubleArray(int n) {
    double[] ret = new double[n];
    for (int i = 0; i < n; i++) {
      ret[i] = nextDouble();
    }
    return ret;
  }

  public int[]
  nextIntArrayOneBased(int n) {
    int[] ret = new int[n + 1];
    for (int i = 1; i <= n; i++) {
      ret[i] = nextInt();
    }
    return ret;
  }

  public char[][] nextCharMatrix(int n, int m) {
    char[][] res = new char[n][m];
    for (int i = 0; i < n; ++i) {
      res[i] = nextCharArray();
    }
    return res;
  }
}
