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
const int MAXN = 1000000005;
/**  '' "Lionel VB" ^ **/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll T, a, b;
    sf(T);
    while(T--){
        sf(a >> b);
        if(a < b) swap(a, b);
        if(a > 2*b) pf("NO");
        else {
            a %= 3;
            b %= 3;
            if(a == 0 && b == 0) pf("YES");
            else if((a == 2 && b == 1) || (a == 1 && b == 2)) pf("YES");
            else pf("NO");
        }

    }
}
