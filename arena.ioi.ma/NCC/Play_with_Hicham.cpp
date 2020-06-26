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
int arr[10];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll X, A, B;
    sf(X >> A >> B);
    string allowed;
    sf(allowed);
    
    for(int i = 0; i < allowed.size(); i++){
        arr[allowed[i] - '0'] = 1;
    }
    int count = 0;
    ll f = X;
    int i;
    if(A % X == 0) i = X*(A / X);
    else i = X*(A / X) + X;
    for (; i <= B; i += X) { 
        ll t = i;
        int d;
        int flag = 0;
        while(t > 0){
            d = t % 10;
            t /= 10;
            if(arr[d] == 0){
                flag = 1;
                break;
            }
        }
        if (flag == 0) count++;
    } 
    pf(count);
    return 0;
}