#include <bits/stdc++.h>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;

#define pf(n) cout << n << endl
#define pfs(n) cout << n
#define ps() cout << " "
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
const int MAXN = 100005;
/**  '' "Lionel VB" ^ **/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll N[26000];
    for(int h = 0; h < 26000; h++){
        N[h] = 1.5*h*(h+1) - h;
    }
    ll t, n, m; cin >> t;
    while(t--){
        cin >> n;
        ll ans = 0;
        for(ll i = 25999; i > 0 && n > 0; i--){
            while(N[i] <= n) {
                ans++;
                n -= N[i];
            }
        }
        cout << ans << endl;
    }


    return 0;
}