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
    ll N, Q;
    sf(N >> Q);
    string str1, str2;
    unordered_map <string, string> dict;
    while(N--) {
        sf(str1);
        sf(str2);
        dict.insert({str1, str2});
    }
    while(Q--){
        sf(str1);
        ull index = str1.rfind('.');
        if(index==string::npos){
            pf("unknown");
            continue;
        }
        str2 = "";
        str2 = str1.substr(index + 1);
        if(dict.find(str2) == dict.end()) pf("unknown");
        else pf(dict.at(str2));
    }

}
