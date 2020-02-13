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
const int MAXN = 10000005;
/**  '' "Lionel VB" ^ **/

int arr[130];
int lastOcc[130];
int ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    memset(lastOcc, -1, sizeof(lastOcc));
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 1;
    lastOcc[0] = 1;

    for(int l = 3; l < 128; l++){

        if(lastOcc[arr[l - 1]] == -1){

            arr[l] = 0;
        }
        else arr[l] = l - lastOcc[arr[l-1]] - 1;
        lastOcc[arr[l - 1]] = l - 1;
    }
    ll T, N;
    sf(T);
    while(T--){
        sf(N);
        ans = 0;
        in(i,N){
            if(arr[i] == arr[N-1]) ans++;
        }
        pf(ans);
    }
}