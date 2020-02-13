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
#define ps() cout <<" "
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define ni(i,n) for (int i = n - 1; i >= 0; i--)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
const int MAXN = 10000005;
/**  '' "Lionel VB" ^ **/


long double ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll T, N, M, K;
    long double  x, y, a, b, a0, b0, d, d0, j0, dn, dm, dk;
    sf(T);
    while(T--){
        sf(x >> y >> N >> M >> K);
        d = 0;
        vp pN;
        vp pM;
        vp pK;
        ans = 0;
        in(i, N){
            sf(a >> b);
            pN.push_back(make_pair(a, b));
        }

        in(i, M){
            sf(a >> b);
            pM.push_back(make_pair(a, b));
        }
        in(i, K){
            sf(a >> b);
            pK.push_back(make_pair(a, b));
        }
//        pfs(x);ps();pfs(y);pf("");
        d = 99999999999999999;
        in(n, N){
            dn = sqrt((x - pN[n].first)*(x - pN[n].first) + (y - pN[n].second)*(y - pN[n].second));
            if(dn > d) continue;
            in(m, M){
                dm = sqrt((pN[n].first - pM[m].first)*(pN[n].first - pM[m].first) + (pN[n].second - pM[m].second)*(pN[n].second - pM[m].second));
                if(dn + dm > d) continue;
                in(k, K){
                    dk = sqrt((pM[m].first - pK[k].first)*(pM[m].first - pK[k].first) + (pM[m].second - pK[k].second)*(pM[m].second - pK[k].second));
                    d = min(d, dn + dm + dk);
                }
            }
        }
        in(m, M){
            dm = sqrt((x - pM[m].first)*(x - pM[m].first) + (y - pM[m].second)*(y - pM[m].second));
            if(dm > d) continue;
            in(n, N){
                dn = sqrt((pN[n].first - pM[m].first)*(pN[n].first - pM[m].first) + (pN[n].second - pM[m].second)*(pN[n].second - pM[m].second));
                if(dn + dm> d) continue;
                in(k, K){
                    dk = sqrt((pN[n].first - pK[k].first)*(pN[n].first - pK[k].first) + (pN[n].second - pK[k].second)*(pN[n].second - pK[k].second));
                    d = min(d, dn + dm + dk);
                }
            }
        }
        pf(setprecision(19) << d);
    }
}