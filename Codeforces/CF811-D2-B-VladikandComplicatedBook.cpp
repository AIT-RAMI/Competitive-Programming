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
    int n, m, t;
    sf(n >> m);
    int P[n];
    in(i, n){
        sf(P[i]);
    }
    int l, r, x;
    while(m--){
        sf(l >> r >> x);
        l--; r--; x--;
        int index = x;
        if(index < l || index > r){
            pf("Yes");
            continue;
        }
        int count = 0;
        for(int i = l; i <= r; i++){
            if(P[i] < P[x]) count++;
        }
        
        if(l + count == x) {
            pf("Yes");
        } else {
            pf("No");
        }
        /*for(int i = l ; i <= r; i++){
            if(v[i] == x){
                index2 = i;
                break;
            } 
        }
        if(index == index2){
            pf("Yes");
        } else {
            pf("No");
        }*/
    }
    return 0;
}