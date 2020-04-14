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
    
    char c, ci;
    cin.get(c);
    ci = c;
    int ans = 1;
    int maxi = 1;
    while(cin.get(c)){
        if(ci == c) maxi++;
        else {
            ans = max(ans, maxi);
            maxi = 1;
        }
        ci = c;
    }
    cout << ans;
    return 0;
}