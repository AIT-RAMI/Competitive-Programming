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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    int s = str.size();
    int flag = 0;
    for(int i = 1; i < s; i++){
        if(str[i] == '1') {
            flag = 1;
            break;
        }
    } 
    
    s--;
    if(flag == 1){
        cout << (s / 2) + 1 << endl;
    } else {
        if(s != s - (s % 2)) cout << (s / 2) + 1 << endl; 
        else cout << s / 2 << endl;
    }
    return 0;
}