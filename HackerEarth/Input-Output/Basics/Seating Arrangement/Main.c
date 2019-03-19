#include <stdio.h>
int main(int argc, const char *argv[])
{   int N;
    scanf("%d",&N);
    int Numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%d",Numbers+i);
    }
    for (int i = 0; i < N; i++) {
        int n = Numbers[i] % 12;
        if (n == 0) n = 12;
        printf("%d",Numbers[i] - 2*n + 13);
        n = n % 6;
        if (n == 0 || n == 1) {
            printf(" WS\n");
        } else if (n == 5 || n == 2) {
            printf(" MS\n");
        } else {
            printf(" AS\n");
        }
    }
    return 0;
}
