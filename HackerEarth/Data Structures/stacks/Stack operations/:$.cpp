#include <bits/stdc++.h>
#include <algorithm>
 
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
 
#define pf(n) cout << n << endl
#define pfs(n) cout << n
#define ps() cout <<" ";
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define ni(i,n) for (int i = n - 1; i >= 0; i--)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
/**  '' "Lionel VB" ^ **/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll N;
    ll K;
    sf(N);
    sf(K);
    ll A[N];
    ll Max = 0;
    in(i,N){
        sf(A[i]);
        Max = max(Max, A[i]);
    }
 
    if (N == 1) {
        if (K % 2 == 0) pf(A[0]);
        else pf(-1);
    } else {
        if (K > N) pf(Max);
        else {
            if (K == N) {
                Max = 0;
                in(i,K - 1){
                    Max = max(Max, A[i]);
                }
                pf(Max);
            } else {
                Max = 0;
                in(i,K - 1){
                    Max = max(Max, A[i]);
                }
                pf(max(Max, A[K]));
            }
        }
 
    }
}
