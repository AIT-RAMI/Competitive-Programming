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
    int n;
    cin >> n;
    if(n == 1) {
        cout << 1;
        return 0;
    }
    if(n <= 3) cout << "NO SOLUTION";
    else{
        if(n % 2 == 0){
            for(int i = 2; i <= n; i += 2){
                cout << i << " ";
            }
            for(int i = 1; i <= n; i += 2){
                cout << i << " ";
            }
        } else {
            for(int i = 1; i <= n; i += 2){
                cout << i << " ";
            }
            for(int i = 2; i <= n; i += 2){
                cout << i << " ";
            }
        }
    }

    return 0;
}