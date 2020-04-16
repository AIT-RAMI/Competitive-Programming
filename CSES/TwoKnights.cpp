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
    ll n;
    cin >> n;
    for(ll i = 1; i <= n; i++){        
        pf((i*i*(i*i-1)-(8+24+16*(i-4)+16+24*(i-4)+(i-4)*(i-4)*8))/2);
    }
    return 0;
}