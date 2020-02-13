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
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
/**  '' "Lionel VB" ^ **/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll N, M, v1, v2, v3, v4;
    sf(N >> M);
    ll A[N][M];
    in(i, N) in(j, M){
        sf(A[i][j]);
    }
    sf(v1 >> v2 >> v3 >> v4);

    ll FonC = 0, FonR = 0;
    // Performing on columns
    // N*v4
    in(i, M) {
        ll temp = 0;
        ll temp_ = 0;
        in(j,N) {
            temp += abs(A[j][i] + v3);
            temp_ += abs(A[j][i]);
        }
        FonC += max(max(abs(v4*N), temp), temp_);
    }

    // Performing on rows
    in(i, N) {
        ll temp = 0;
        ll temp_ = 0;
        in(j,M) {
            temp += abs(A[i][j] + v1);
            temp_ += abs(A[i][j]);
        }
        FonR += max(max(abs(v2*M), temp), temp_);
    }
    // Answer
    pf(max(FonC, FonR));
}
