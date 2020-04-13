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
bool isPerfectSquare(ll n){
    long double sq = sqrt(n);
    return ((sq - floor(sq)) == 0);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    sf(n);
    for(int s = 1; s < 170; s++){
        
            ll x  = sqrt(s*s/4 + n) - s / 2;
            ll t = x;
            ll sum = 0;
            while(t > 0){
                sum += t % 10;
                t /= 10;
            }
            if (x*x + sum*x - n == 0) {
                pf(x);
                return 0;
            }
    }
    pf(-1);
    return 0;
}