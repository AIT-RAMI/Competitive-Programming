#include <bits/stdc++.h>
#include <algorithm>
#include <string.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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
    ll T;
    sf(T);
    while(T--){
        int N, K;
        sf(N >> K);
        unordered_map <int, int> map;
        while(N--){
            string str;
            sf(str);
            int size = str.size();
            if (map.count(size)) map.at(size)++;
            else {
                map.insert({size, 1});
            }
        }
        bool possible = true;
        for(auto& it : map){
            if(it.second % K != 0){
                possible = false;
                break;
            }
        }
        if (possible) pf("Possible");
        else pf("Not possible");
    }
    return 0;
}
