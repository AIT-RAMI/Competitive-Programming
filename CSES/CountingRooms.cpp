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
int n, m;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char temp;
    cin >> n >> m;
    int grid[n][m];
    in(i, n){
        in(j,m){
            temp = getchar();
            if(temp == '#') grid[i][j] = 0;
            else grid[i][j] = 1;
        }
    }
    in(i, n){
        in(j,m){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}