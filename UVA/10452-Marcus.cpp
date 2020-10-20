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
string key = "IEHOVA#";
int c;
int n, m;
char grid[9][9];
vector <string> ans;
int dx[] = {-1, 0, 0};
int dy[] = {0, 1, -1};
string dir[] = {"forth", "right", "left"};
bool valid(int x, int y) {
    return x < n && x >= 0 && y < m && y >= 0;
}
void dfs(int x, int y, int indx){
    if(grid[x][y] == '#') return;
    for(int i = 0; i < 3; i++){
        int toX = x + dx[i];
        int toY = y + dy[i];
        if(valid(toX, toY) && grid[toX][toY] == key[indx]){
            ans.push_back(dir[i]);
            dfs(toX, toY, indx + 1);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        c = 0;
        int x, y;
        in(i, n){
            in(j, m){
                cin >> grid[i][j];
                if(grid[i][j] =='@') {
                    x = i;
                    y = j;
                }
            }
        }
        ans.clear();
        dfs(x, y, 0);
        cout << ans[0];
        for(int i = 1; i < ans.size(); i++){
            cout << " " << ans[i];
        }
        cout << endl;
    }
    return 0;
}