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
const int MAXN = 100005;
/**  '' "Lionel VB" ^ **/
ll ans = 9999999999;
ll Max, Min;
ll arr[MAXN];
int p[MAXN];
ll diff;
void findClosest(vector<vector<ll>> & v)
{
    memset(p, 0, MAXN);
    diff = INT_MAX;  // Initialize min diff

    while (true){

        ll minimum = v[0][p[0]];
        ll maximum = v[0][p[0]];
        in(i,v.size()){
            minimum = min(minimum, v[i][p[i]]);
            maximum = max(maximum, v[i][p[i]]);
        }

        // Update result if current diff is less than the min
        // diff so far
        if (maximum-minimum < diff)
        {
            diff = maximum - minimum;
        }

        // We can't get less than 0 as values are absolute
        if (diff == 0) break;

        // Increment index of array with smallest value
        in(i, v.size()){
            if(v[i][p[i]] == minimum) {
                p[i]++;
                break;
            }
        }
        in(i, v.size()){
            if(p[i] >= v[i].size()) {
                return;
            }
        }

        /*pfs(minimum); ps(); pfs(maximum);pf("");
        pfs("p ");
        in(i,v.size()){
            pfs(p[i]); ps();
        }
        pf("");*/
    }

    // Print result

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll T, N, M, val;
    sf(T);
    while(T--){
        sf(N >> M);
        vector<vector<ll>> v(M, vector<ll>(0, 0));
        //pf("rows "<<rows);
        in(i,N){
            ll index = i % M;
            sf(val);
            v[index].push_back(val);
        }
        in(i, v.size()){
            sort(v[i].begin(), v[i].end());
        }
        findClosest(v);
        pf(diff);
    }
}