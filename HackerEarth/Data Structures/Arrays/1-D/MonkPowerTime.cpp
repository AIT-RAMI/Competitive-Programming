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
    int N;
    sf(N);
    int ideal[N];
    int called[N];
    for(int i = 0; i < N; i++){
        sf(called[i]);
    }
    for(int i = 0; i < N; i++){
        sf(ideal[i]);
    }
    int ni = 0;
    int counter = 0;
    while(counter < N) {
        ni++;
        if (ideal[counter] == called[counter]){
            counter++;
        } else {
            int temp = called[counter];
            for(int i = counter; i < N; i++){
                called[i] = called[i+1];
            }
            called[N-1] = temp;
        }
    }
    pf(ni);
    return 0;
}
