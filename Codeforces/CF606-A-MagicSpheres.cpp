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
    int a, b, c;
    int x, y, z;
    sf(a >> b >> c);
    sf(x >> y >> z);
    int needed = 0;
    int extra = 0;

    if(a > x) extra += (a - x) / 2;
    if(a < x) needed += x - a;

    if(b > y) extra += (b - y) / 2;
    if(b < y) needed += y - b;

    if(c > z) extra += (c - z) / 2;
    if(c < z) needed += z - c;

    if(needed <= extra) pf("Yes");
    else pf("No");
    return 0;
}