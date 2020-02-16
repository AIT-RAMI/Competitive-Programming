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
const int MAXN = 1000005;
/**  '' "Lionel VB" ^ **/
int arr[MAXN];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, l, r, x;
    vi v;
    //unordered_set<pair<int, int>> s;
    set<int> s;
    sf(n >> m);
    for(int i = 1; i <= n; i++){
        s.insert(i);
    }
    in(i, m){
        sf(l >> r >> x);
        v.clear();
        for(set<int>::iterator it = s.lower_bound(l); it != s.end() && *it <= r; it++){
            if(*it != x) v.push_back(*it);
        }
        in(i, v.size()){
            s.erase(v[i]);
            arr[v[i]] = x;
        }
    }
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}