#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;
const ll mod = 1000000007;

#define pf(n) cout << n << endl
#define ps() cout <<" ";
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
/**  '' "Lionel VB" ^ **/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T, N;
    ll ans, x;
    double ns;
    sf(T);
    while(T--){
        ans = 0;
        sf(N);
        if (N >= 60) {
            while (N--) sf(x);
            pf("0");
        } else {
            ns = pow(2, N - 1);
            while (N--) {
                sf(x);
                if (x >= ns) {
                    ans = ans % mod + x % mod;
                }
            }
            pf(ans % mod);
        }

    }
    return 0;
}
