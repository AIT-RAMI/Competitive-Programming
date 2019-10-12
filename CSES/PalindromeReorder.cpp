#include <bits/stdc++.h>
#include <algorithm>
#include <string.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1000000007;

#define pf(n) cout << n << endl
#define pfs(n) cout << n
#define ps() cout <<" "
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define ni(i,n) for (int i = n - 1; i >= 0; i--)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
const int MAXN = 10000005;
/**  '' "Lionel VB" ^ **/

int alpha[26];
int pal[MAXN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char c;
    int N = 0;
    while(cin.get(c) && c != '\n'){
        alpha[c - 'A']++;
        N++;
    }
    if(N % 2 == 1){
        int odd = 0;
        int odd1 = 0;
        in(i, 26){
            if (alpha[i]%2 == 1) {
                odd++;
                odd1 = i;
            }
            if(odd > 1) break;
        }
        if (odd > 1){
            pf("NO SOLUTION");
            return 0;
        }
        if(odd == 1){
            pal[N/2] = odd1;
            alpha[odd1]--;
            int left = 0;
            int right = N - 1;
            for(int i = 0; i < 26; i++){
                while(alpha[i] > 0){
                    pal[left] = i;
                    pal[right] = i;
                    left++; right--;
                    alpha[i] -= 2;
                }
            }
            in(i,N) printf("%c",pal[i]+65);
        }
    } else {
        in(i, 26){
            if (alpha[i]%2 == 1) {
                pf("NO SOLUTION");
                return 0;
            }
        }

        int left = 0;
        int right = N - 1;
        for(int i = 0; i < 26; i++){
            while(alpha[i] > 0){
                pal[left] = i;
                pal[right] = i;
                left++; right--;
                alpha[i] -= 2;
            }
        }
        in(i,N) printf("%c",pal[i]+65);
    }
    return 0;
}
