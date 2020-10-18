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
const int MAXN = 201;
/**  '' "Lionel VB" ^ **/
int n;
int grid[MAXN][MAXN];
bool isThereAPath(int x, int y, int obs){
    if (x == n-1 && y == n-1) return true;
    if (x >= n || y >= n || grid[x][y] == obs) return false;
    return isThereAPath(x + 1, y, obs) || isThereAPath(x, y + 1, obs);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        in(i, n){
            string temp; cin >> temp;
            in(j, n){
                grid[i][j] = temp[j] - '0';
            }
        }
        if(((grid[0][1] & grid[1][0] & grid[n-1][n-2] & grid[n-2][n-1]) == 1) || ((grid[0][1] | grid[1][0] | grid[n-1][n-2] | grid[n-2][n-1]) == 0)){
            cout << 2 << endl;
            cout << n - 1 << " " << n << endl;
            cout << n << " " << n - 1<< endl;
        }
        else if(grid[0][1] == grid[1][0]){
            int v = grid[0][1];
            if(grid[n-1][n-2] == v^1 && grid[n-2][n-1] == v){
                cout << 1 << endl;
                cout << n - 1 << " " << n << endl;
            }
            else if(grid[n-1][n-2] == v && grid[n-2][n-1] == v^1){
                cout << 1 << endl;
                cout << n << " " << n - 1 << endl;
            } else {
                cout << 0 << endl;
            }
        } 
        else if(grid[n-1][n-2] == grid[n-2][n-1]){
            int v = grid[n-1][n-2];
            if(grid[0][1] == v^1 && grid[1][0] == v){
                cout << 1 << endl;
                cout << 2 << " " << 1 << endl;
            }
            else if(grid[0][1] == v && grid[1][0] == v^1){
                cout << 1 << endl;
                cout << 1 << " " << 2 << endl;
            } else {
                cout << 0 << endl;
            }
        } else {
            cout << 2 << endl;
            if(grid[0][1] == 1){
                cout << 1 << " " << 2 << endl;
            } else {
                cout << 2 << " " << 1 << endl;
            }
            if(grid[n-1][n-2] == 0){
                cout << n << " " << n-1 << endl;
            } else {
                cout << n-1 << " " << n << endl;
            }
        }
    }
    return 0;
}