/*
 *
   Toximoron,
   IIITM Gwalior
 *
 */
#include <bits/stdc++.h>
using namespace std ;
typedef long double ld ;
typedef long long int ll ;
#define tez ios_base::sync_with_stdio(false) ; cin.tie(NULL) ;
#define be begin()
#define en end()
#define fi first
#define se second
#define mp make_pair
#define t() ll t; cin>>t; while(t--)
#define all(a) a.be,a.en
#define rall(a) a.rbegin(),a.rend()
#define lob lower_bound
#define upb upper_bound
#define inp(a,n) for(ll i=0 ; i<n ; i++){ll j; cin>>j; a.pub(j);c[j]++;}
#define pub push_back
#define pob pop_back
#define vll vector <ll>
#define pll pair<ll,ll>
#define mll map <ll,ll>
#define in insert
#define nl cout<<’\n’ ;
#define sz size()
#define bsrch(a,x) binary_search(all(a),x)
#define srt(a) sort(all(a))
#define mst(a,x) memset(a,x,sizeof(a))
int main()
{
    tez
    ll n,k ;
    cin>>n>>k ;
    ll c[1000001],flag=0 ;
    mst(c,0) ;
    for(ll i=0 ; i<n ; i++)
    {
        ll j ;
        cin>>j ;
        if(k-j<1000000 && k>j && c[k-j]) flag=1 ;
        c[j]++ ;
    }
    if(flag)    cout<<"YES" ;
    else    cout<<"NO" ;
    return 0;
}
