#include<bits/stdc++.h>
using namespace std;

int main(){
    // Method 1 :- Storing using Matrix
    // Space Complexity = O(n x n)
    int n , m;
    cin >> n >> m;
    int adj[n + 1][m + 1];   // for 1 based indexing
    for(int i = 0 ; i < m ; i++){
        int u , v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    
    
    // Method 2:- Adjancy list (Arrays)
    int n , m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for(int i = 0 ; i < m ; i++){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}