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
    ll N, temp, time = 0;
    sf(N);
    queue<ll> calledq;
    queue<ll> idealq;
    in(i,N) {
        sf(temp);
        calledq.push(temp);
    }
    in(i,N) {
        sf(temp);
        idealq.push(temp);
    }
    while(!idealq.empty()){
        time++;
        if (calledq.front() == idealq.front()) {
            calledq.pop();
            idealq.pop();
        } else {
            temp = calledq.front();
            calledq.pop();
            calledq.push(temp);
        }
    }
    pf(time);
}
