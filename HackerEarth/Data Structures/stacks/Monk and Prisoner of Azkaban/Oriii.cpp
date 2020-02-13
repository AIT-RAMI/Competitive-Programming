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
    sf(N);
    ll A[N];
    in(i,N){
        sf(A[i]);
    }
    ll x[N];
    in(i,N) x[i]=-1;
    ll y[N];
    in(i,N) y[i]=-1;

    stack<ll> s;
    in(i,N){
        if (s.empty() || A[i] <= A[s.top()]) s.push(i);
        else {
            while (!s.empty() && A[i] > A[s.top()]) {
                y[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
    }
    stack<ll> ss;
    ni(i,N){
        if (s.empty() || A[i] <= A[s.top()]) s.push(i);
        else {
            while (!s.empty() && A[i] > A[s.top()]) {
                x[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
    }
    in(i,N){
        if(x[i]!=-1) x[i]++;
        if(y[i]!=-1) y[i]++;
        pfs(x[i]+y[i]);ps();
    }
}
