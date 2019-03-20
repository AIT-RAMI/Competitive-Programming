#include <stdio.h>
int main(int argc, const char *argv[])
{   int N;
    scanf("%d",&N);
    unsigned long long Numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%ld",Numbers+i);
    }
    unsigned long long result = 1;
    for (int i = 0; i < N; i++) {
        result = ( (result  % 1000000007 ) * (Numbers[i] % 1000000007) ) % 1000000007;
    }
    printf("%d", result);
    return 0;
}
