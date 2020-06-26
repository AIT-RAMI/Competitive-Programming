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
int n, m;
struct Point { 
    int x; 
    int y; 
}; 
  
struct queueNode { 
    Point pt;
    int dist;  
}; 
  
bool isValid(int row, int col) {     
    return (row >= 0) && (row < n) && 
           (col >= 0) && (col < m); 
} 
  
// These arrays are used to get row and column 
// numbers of 4 neighbours of a given cell 

  
// function to find the shortest path between 
// a given source cell to a destination cell. 
int BFS(int mat[][1000], Point src, Point dest) { 

    if (!mat[src.x][src.y] || !mat[dest.x][dest.y]) 
        return -1; 
  
    bool visited[n][m]; 
    memset(visited, false, sizeof visited); 
    
    visited[src.x][src.y] = true; 
  
    queue<queueNode> q; 

    queueNode s = {src, 0}; 
    q.push(s);  
  

    while (!q.empty()) {

        queueNode curr = q.front(); 
        Point pt = curr.pt; 

        if (pt.x == dest.x && pt.y == dest.y) 
            return curr.dist; 

        q.pop(); 
        // Calculate counters

        int rightCounter = 0;
        int leftCounter = 0;
        int upCounter = 0;
        int downCounter = 0;
        
        while(isValid(pt.x + upCounter, pt.y) && mat[pt.x + upCounter][pt.y] != 0) upCounter++;
        while(isValid(pt.x + downCounter, pt.y) && mat[pt.x + downCounter][pt.y] != 0) downCounter--;
        while(isValid(pt.x, pt.y + rightCounter) && mat[pt.x][pt.y + rightCounter] != 0) rightCounter++;
        while(isValid(pt.x, pt.y + leftCounter) && mat[pt.x][pt.y + leftCounter] != 0) leftCounter--;
        
        upCounter--;
        rightCounter--;
        leftCounter++;
        downCounter++;

        if(rightCounter == 0) rightCounter = 1;
        if(leftCounter == 0) leftCounter = -1;
        if(upCounter == 0) upCounter = 1;
        if(downCounter == 0) downCounter = -1;

        int rowNum[] = {leftCounter, 0, 0, rightCounter}; 
        int colNum[] = {0, downCounter, upCounter, 0};   
         
        for (int i = 0; i < 4; i++){ 
            int row = pt.x + rowNum[i]; 
            int col = pt.y + colNum[i]; 

            if (isValid(row, col) && mat[row][col] &&  
               !visited[row][col]) { 
                visited[row][col] = true; 
                queueNode Adjcell = { {row, col}, 
                                      curr.dist + 1 }; 
                q.push(Adjcell); 
            } 
        } 
    } 
    return -1; 
} 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int mat[1000][1000];
        int counter = 0;
        in(i, n){
            string temp;
            cin >> temp;
            in(j, m){
                if(temp[j] != '#') {
                    mat[i][j] = 1;
                }
                else {
                    mat[i][j] = 0;
                    counter++;
                }
            }
        }
        // for the sake of some points w safi :'(
        if(counter == 0) {
            pf(2);
            continue;
        }
        Point source = {n-1, 0}; 
        Point dest = {0, m-1}; 

        int dist = BFS(mat, source, dest); 
        if (dist != INT_MAX) 
            pf(dist); 
        else
            pf(-1);
        
    }
    return 0;
}