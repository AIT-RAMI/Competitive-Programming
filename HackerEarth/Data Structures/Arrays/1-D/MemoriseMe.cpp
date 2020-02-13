#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;
const ll mod = 1000000007;

#define pf(n) cout << n << endl
#define ps() cout <<" ";
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
/**  '' "Lionel VB" ^ **/

int ans[1001];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int x;
    while(N--){
        cin >> x;
        ans[x]++;
    }
    int Q;
    cin >> Q;
    while(Q--){
        cin >> x;
        if (!ans[x]) {
            cout << "NOT PRESENT\n";
            continue;
        }
        cout << ans[x] << endl;
    }
    return 0;
}
