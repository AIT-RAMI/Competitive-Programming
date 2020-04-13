#include <cstdio>
#include <algorithm>
 
using namespace std;
 
const int MaxN = ( 1 << 17 );
 
int v[ MaxN ];
int p[ MaxN ];
int s[ MaxN ];
 
int cmp( int x, int y ) {
 if( v[x] != v[y] ) return v[x] < v[y];
 return x < y;
}
 
int n;
 
int main( void ) {
 scanf( "%d", &n );
 for( int i = 0; i < n; ++i ) scanf( "%d", &v[i] );
 for( int i = 0; i < n; ++i ) p[i] = i;
 sort( p, p+n, cmp );
 
 
 int best = 0;
 for( int i = 0; i < n; ++i ) {
    s[p[i]] = max( -1, best-p[i]-1 );
    best = max( best, p[i] );
 }
 
 for( int i = 0; i < n; ++i ) printf( "%d ", p[i] );
 
 return 0;
}
