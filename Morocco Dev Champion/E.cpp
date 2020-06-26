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
ll GetX(vector<int> set, int m){
    ll ans = 0;
    vector< vector<int> > subset;
    vector<int> empty;
    subset.push_back( empty );

    for (int i = 0; i < set.size(); i++){
        vector< vector<int> > subsetTemp = subset;

        for (int j = 0; j < subsetTemp.size(); j++)
            subsetTemp[j].push_back( set[i] );

        for (int j = 0; j < subsetTemp.size(); j++){
            subset.push_back( subsetTemp[j] );
            ll product = 1;
            for(int value : subsetTemp[j]){
                product *= value % m;
            }
            product %= m;
            ans = max(ans, product);
        }
    }
    return ans;
}
ll GetX2(vector<int> arr,int m) {
    ll ans = 0;
    int n = arr.size();
	int  count = pow(2,n);
	for (int i = 0; i < count; i++) {
        ll product = 1;
		for (int j = 0; j < n; j++) {
			if ((i & (1 << j)) > 0)
                product *= arr[j];
				product %= m;
		}
        ans = max(ans, product);
	}
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string letters = "abcdefghijklmnopqrstuvwxyz";
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> s >> n;
        vector<int> numbers;
        in(i, s.size()){
            if(isdigit(s[i])){
                if(s[i] != '0'){
                    numbers.push_back(s[i] - '0');
                }
            }
        }
        ll x = GetX2(numbers, n);
        in(i, s.size()){
            if(isdigit(s[i])){
                cout << '0';
            } else {
                cout << letters[((s[i] - 'a' + x) % 26)];
            }
        }
        cout << endl;
    }
    return 0;
}