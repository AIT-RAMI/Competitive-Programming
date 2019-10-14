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
const int MAXN = 100000005;
/**  '' "Lionel VB" ^ **/


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, t;
    sf(N);
    set<int> s;
    for (int i = 0; i < N; i++){
        sf(t);
        s.insert(t);
    }
    pf(s.size());
}
