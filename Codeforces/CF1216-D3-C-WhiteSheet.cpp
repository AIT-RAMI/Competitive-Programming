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
#define pii pair<int, int> 
const int MAXN = 100005;
/**  '' "Lionel VB" ^ **/
pair<pii, pii> intersect(pii a, pii b, pii c, pii d) {
	int left, right, up, down;
    
    left = max(min(a.first,b.first),min(c.first, d.first));
    down = max(min(a.second,b.second),min(c.second, d.second));

    right = min(max(a.first, b.first), max(c.first, d.first));
    up = min(max(a.second,b.second), max(c.second, d.second));

    if (left >= right || down >= up) return {{0, 0}, {0, 0}};

    else return {{left, down}, {right, up}};
}

ll area(pair<pii, pii> a){
    return 1ll * abs(a.first.first - a.second.first) * abs(a.first.second - a.second.second);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    pair<pii, pii> wp, bp1, bp2;

    sf(wp.first.first >> wp.first.second >> wp.second.first >> wp.second.second);
    sf(bp1.first.first >> bp1.first.second >> bp1.second.first >> bp1.second.second);
    sf(bp2.first.first >> bp2.first.second >> bp2.second.first >> bp2.second.second);
    
    pair<pii, pii> _bp1 = intersect(bp1.first, bp1.second, wp.first, wp.second);
    pair<pii, pii> _bp2 = intersect(bp2.first, bp2.second, wp.first, wp.second);
    pair<pii, pii>  bp = intersect(_bp2.first, _bp2.second, _bp1.first, _bp1.second);
   
    
    if(area(wp) > area(_bp1) + area(_bp2) - area(bp)){
        pf("YES");
    } else {
        pf("NO");
    }
    return 0;
}