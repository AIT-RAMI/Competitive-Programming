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
int minSwaps(int arr[], int n) { 
    pair<int, int> arrPos[n]; 
    for (int i = 0; i < n; i++) 
    { 
        arrPos[i].first = arr[i]; 
        arrPos[i].second = i; 
    } 
    sort(arrPos, arrPos + n); 
    vector<bool> vis(n, false); 
    int ans = 0; 
    for (int i = 0; i < n; i++) { 
        if (vis[i] || arrPos[i].second == i) 
            continue; 
        int cycle_size = 0; 
        int j = i; 
        while (!vis[j]) { 
            vis[j] = 1; 
            j = arrPos[j].second; 
            cycle_size++; 
        } 
        if (cycle_size > 0) 
        { 
            ans += (cycle_size - 1); 
        } 
    } 
    return ans; 
} 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s;
    cin >> n >> s;
    while(n--){
        ll nod = 0;
        ll l, r;
        string temp;
        int arr[s];
        in(i, s){
            cin >> l >> temp >> r;
            arr[l-1] = r;
        }
        pf(minSwaps(arr, s));
    }
    return 0;
}