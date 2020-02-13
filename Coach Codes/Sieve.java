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
