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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, x;
    sf(N);
    queue <int> ideal, called;
    for(int i = 0; i < N; i++){
        sf(x);
        called.push(x);
    }
    for(int i = 0; i < N; i++){
        sf(x);
        ideal.push(x);
    }
    int ni = 0;
    while(!called.empty()) {
        ni++;
        if (ideal.front() == called.front()){
            ideal.pop();
            called.pop();
        }
        else {
            x = called.front();
            called.pop();
            called.push(x);
        }
    }
    pf(ni);
    return 0;
}
