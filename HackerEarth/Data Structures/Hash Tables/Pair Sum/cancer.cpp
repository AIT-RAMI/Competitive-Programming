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
    ll N, K, temp;
    sf(N >> K);
    map <int, bool> A;
    in(i, N) {
        sf(temp);
        if(A.count(temp) && 2*temp == K) A.find(temp)->second = true;
        else A.insert({temp, false});
    }

    for(pair<int,bool> num : A){
        if(num.second){
            if(num.first * 2 == K) {
                pf("YES");
                return 0;
            }
        }
        else if (A.count(K - num.first) && 2*num.first != K){
            pf("YES");
            return 0;
        }
    }
    pf("NO");
    return 0;

}
