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
ll a, b, c, d;
void equation_plane(ll x1, ll y1,  
                    ll z1, ll x2, 
                    ll y2, ll z2,  
                    ll x3, ll y3, ll z3) { 
    ll a1 = x2 - x1; 
    ll b1 = y2 - y1; 
    ll c1 = z2 - z1; 
    ll a2 = x3 - x1; 
    ll b2 = y3 - y1; 
    ll c2 = z3 - z1; 
    a = b1 * c2 - b2 * c1; 
    b = a2 * c1 - a1 * c2; 
    c = a1 * b2 - b1 * a2; 
    d = (- a * x1 - b * y1 - c * z1);
} 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n < 4){
            ll temp;
            in(i, n){
                in(j, 3){
                    cin >> temp;
                }
            }
            pf("Yes");
            continue;
        }
        ll x1, y1, z1, x2, y2, z2,  x3, y3, z3;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> x3 >> y3 >> z3;
        equation_plane(x1, y1, z1, x2, y2, z2,  x3, y3, z3);
        int verdict = 0;
        ll x, y, z;
        in(i, n - 3){
            cin >> x >> y >> z;
            if(x*a + y*b + z*c - x1*a - y1*b - z1*c != 0){
                verdict = 1;
            }
        }
        if(verdict == 0){
            pf("Yes");
        } else {
            pf("No");
        }
    }
    return 0;
}