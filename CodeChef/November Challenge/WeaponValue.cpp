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

int arr[20];
int ans;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll T, N;
    string str;
    sf(T);
    while(T--){
        ans = 0;
        in(i,10) arr[i]=0;
        sf(N);
        in(i,N){
            sf(str);
            in(j,10){
                if(str[j]=='1'){
                    arr[j]++;
                }
            }
        }
        in(i,10){
            if(arr[i]%2 == 1) ans++;
        }
        pf(ans);
    }
}