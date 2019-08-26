#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;
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
    ll N;
    ll X;
    pair<int, int> p;
    sf(N >> X);
    queue <pair<int, int>> q;
    in(i,N){
        sf(p.first);
        p.second = i;
        q.push(p);
    }
    in(i,X){
        queue <pair<int, int>> tq;
        pair<int, int> max = {-250, -250};
        for (int j = 0; j < X && !q.empty(); j++){
            if(q.front().first > max.first) max = q.front();
            if (q.front().first != 0) q.front().first -= 1;
            tq.push(q.front());
            q.pop();
            //pfs("hey im ");pf(i);
        }

        pfs(max.second + 1);ps();
        while(!tq.empty()) {
            //pfs("hey ehm im ");pf(i);
            if(tq.front().second != max.second) q.push(tq.front());
            tq.pop();
        }

    }
}
