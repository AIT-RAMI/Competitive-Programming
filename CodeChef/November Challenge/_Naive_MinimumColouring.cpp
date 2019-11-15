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
void print(vector<vector<ll> >& arr)
{
    // number of arrays
    int n = arr.size();

    // to keep track of next element in each of
    // the n arrays
    int* indices = new int[n];

    // initialize with first element's index
    for (int i = 0; i < n; i++)
        indices[i] = 0;

    while (1) {
        Max = 0;
        Min = 999999999;
        for (int i = 0; i < n; i++){
            Max = max(Max,arr[i][indices[i]]);
            Min = min(Min,arr[i][indices[i]]);
        }
        ans = min(ans, abs(Max - Min));

        // find the rightmost array that has more
        // elements left after the current element
        // in that array
        int next = n - 1;
        while (next >= 0 &&
               (indices[next] + 1 >= arr[next].size()))
            next--;

        // no such array is found so no more
        // combinations left
        if (next < 0)
            return;

        // if found move to next element in that
        // array
        indices[next]++;

        // for all arrays to the right of this
        // array current index again points to
        // first element
        for (int i = next + 1; i < n; i++)
            indices[i] = 0;
    }
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
        
        print(v);
        pf(ans);
    }
}