#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    int T;
    scanf("%d",&T);
    long long solution[T];
    long long ans;
    for (int i = 0; i < T; i++) {
        ans = 0;
        char word[100009];
        scanf("%s", word);
        int length = (int) strlen(word);
        for (int j = 0; j < length; j++) {
            switch (word[j]) {
                case 'a': case 'e': case 'u': case 'i': case 'o': case 'A': case 'E': case 'U': case 'I': case 'O': ans += (long long)(j + 1)*(long long)(length - j);
            }
        }
        solution[i] = ans;
    }
    for (int i = 0; i < T; i++) printf("%lld\n", solution[i]);
}
