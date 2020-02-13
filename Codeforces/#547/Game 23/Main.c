#include <stdio.h>
int main(int argc, const char *argv[])
{ int a; int b;
    scanf("%d%d", &a, &b);
    if (b % a != 0) {
        printf("-1");
    } else {
        int d = b/a;
        int result = 0;
        while ( d%2 == 0) {
            d = d/2;
            result += 1;
        }
        while ( d%3 == 0) {
            d = d/3;
            result += 1;
        }
        printf("%d",result);}
    return 0;
}
