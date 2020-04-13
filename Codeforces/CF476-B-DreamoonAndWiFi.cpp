#include <bits/stdc++.h>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
//const ll mod = 1000000007;
const ll mod = 1073741824;
#define pf(n) cout << n << endl
#define pfs(n) cout << n
#define ps() cout << " "
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
const int MAXN = 1000017;
/**  '' "Lionel VB" ^ **/
int prime[107];
void sieve(ll n){
    prime[0] = 1;
    prime[1] = 1;
    for(ll i = 2; i < n; i++){
        if(prime[i] == 0){
            for(ll j = i; j < n; j++){
                prime[i*j] = 1;
            }
        }
    }
}
int prime_count[107][107];
void number_of_divisors(ll a){
    ll _a = a;
    for(int p = 2; p < sqrt(a); p++){
        if(prime[p] == 0){
            if(a % p == 0){
                while(a % p == 0){
                    prime_count[_a][p]++;
                    a /= p;
                }
            }
        }
    }
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b, c;
    cin >> a >> b >> c;
    sieve(107);
    in(i,101){
        prime_count[1][i] = 0;
    }
    in(ind,101){
        cout << prime_count[90][ind];
        cout << " ";
    }
    cout << endl;
    
    for(int i = 1; i < 101; i++){
        number_of_divisors(i);
    }
    ll ans = 0;
    for(int i = 1; i < a; i++){
        for(int j = 1; j < b; j++){
            for(int k = 1; k < c; k++){
                ll c =  1;
                in(ind,101){
                    c *= prime_count[i][ind] + prime_count[j][ind] + prime_count[k][ind] + 1;
                    pf("c is : " << c);
                }
                ans += c;
                ans %= mod;
            }
        }
    }
    pf(ans);
    return 0;
}