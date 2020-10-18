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
    int t;
    cin >> t;
    ll x1, y1, x2, y2;
    while(t--){
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == x2 || y1 == y2) cout << abs(x1 - x2) + abs(y2 - y1) << endl;
        else cout << 2 + abs(x1 - x2) + abs(y2 - y1) << endl;
    }
    return 0;
}