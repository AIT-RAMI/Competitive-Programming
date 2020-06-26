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
    int t, a, b, q;
    ll l, r;
    cin >> t;
    while(t--){
        cin >> a >> b >> q;
        while(q--){
            cin >> l >> r;
            ll count = 0;
            if(b > a){
                ll temp = a;
                a = b;
                b = temp;
            }
            for (ll x = l; x <= r; x++) {
                if((x % a) % b != x % b) count++;
            }
            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}