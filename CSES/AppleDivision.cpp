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
#define pb push_back
const int MAXN = 100005;
/**  '' "Lionel VB" ^ **/
vector<ll> arr, sett;
ll n, t, sum;
ll ans = 1000000009;
void solve(int l){
    if(l == n){
        if(sett.size() != 0 && sett.size() != n){
            ll t_sum = 0;
            for (ll i = 0; i < sett.size(); i++){
                t_sum += sett[i];
            }
            //pf(t_sum);
            ans = min(ans, abs(2*t_sum - sum));
        }
    } else {
        solve(l + 1);
        sett.pb(arr[l]);
        solve(l + 1);
        sett.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    in(i, n){
        cin >> t;
        arr.pb(t);
        sum += t;
    }
    if(n == 1){
        cout << arr[0];
        return 0;
    }
    solve(0);
    //pf(sum);
    cout << ans;

    return 0;
}