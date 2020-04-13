#include <bits/stdc++.h>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1073741824 /*1000000007*/;

#define pf(n) cout << n << endl
#define pfs(n) cout << n
#define ps() cout << " "
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
const int MAXN = 1000005;
/**  '' "Lionel VB" ^ **/
bool prime[MAXN];
int d[MAXN];
void sieve(int n){
    prime[0] = false;
    prime[1] = false;
    for(int p = 2; p < n; p++){
        if(prime[p]){
            for(int i = 2; p * i < n; i++){
                prime[p*i] = false;
            }
        }
    }
}
int nod(int n){
    int total = 1;
    for(int i = 2; i <= n; i++){
        if(prime[i]){
            if(n % i == 0){
                int count = 0;
                while(n % i == 0){
                    count++;
                    n /= i;
                }
                total *= count + 1;
            }
        }
    }
    return total;
}
int _nod(int n){
    int total = 0;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            total++;
            if(i*i != n) total++;
        }
    }
    return total;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //memset(prime, true, sizeof(prime));
    //sieve(MAXN);
    int a, b, c;
    sf(a >> b >> c);
    in(i, a*b*c + 1){
        d[i] = _nod(i);
    }
    
    ll ans = 0;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            for(int k = 1; k <= c; k++){
                ans += d[i*j*k];
                ans %= mod;
            }
        }
    }
    pf(ans);

    return 0;
}