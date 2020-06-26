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
int arr[1005];
int arr_size[1005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    sf(n >> k);
    vector<vector<int>> v;
    int m, t;
    in(i, n){
        sf(m);
        arr_size[i] = m;
        vector<int> temp;
        in(j, m){
            sf(t);
            temp.push_back(t);
        }
        v.push_back(temp);
    }
    ll sum = 0;
    in(i, k){
        int min = 1000000009;
        int index;
        in(j, n){
            //cout << v[j][0] << " ";
            if(v[j].size() > arr[j]){
                if(v[j][arr[j]] < min){
                    min = v[j][arr[j]];
                    index = j;
                }
            }
        }
        sum += min;
        arr[index]++;
    }
    pf(sum);
    return 0;
}