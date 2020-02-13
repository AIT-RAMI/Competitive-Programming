#include <bits/stdc++.h>
#include <algorithm>
#include <string.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;

#define pf(n) cout << n << endl
#define pfs(n) cout << n
#define ps() cout <<" "
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define ni(i,n) for (int i = n - 1; i >= 0; i--)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
const int MAXN = 10000005;
/**  '' "Lionel VB" ^ **/

int alpha[26];
int pal[MAXN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll N;
    sf(N);
    ll wsum = N * (N + 1) / 2;
    if (wsum % 2) pf("NO");
    else {
        wsum /= 2;
        ll sum = 0;
        ll diff = 0;
        ll i = N;
        vector<ll> set;
        while(true){
            set.push_back(i);
            sum += i--;
            diff = wsum - sum;
            if (!diff) break;
            if(diff <= i){
                set.push_back(diff);
                break;
            }
        }
        pf("YES");
        pf(set.size());
        in(j, set.size()){
            pfs(set[j]);
            if (j < set.size() - 1) ps();
        }
        pf("");
        pf(N - set.size());
        for(ll j = i; j > 0; j--){
            if(j == diff) continue;
            pfs(j);
            if (j > 1) ps();
        }
    }
}
