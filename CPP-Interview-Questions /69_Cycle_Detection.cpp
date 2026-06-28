/*
File Name : 69_Cycle_Detection.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Cycle Detection in Graph
*/

#include <iostream>
#include <vector>
using namespace std;

bool dfs(int u, vector<vector<int>>& adj, vector<int>& vis) {
    vis[u] = 1;

    for (int v : adj[u]) {
        if (vis[v] == 1)
            return true;

        if (vis[v] == 0 && dfs(v, adj, vis))
            return true;
    }

    vis[u] = 2;
    return false;
}

int main() {
    int V = 4;

    vector<vector<int>> adj(V);

    adj[0]={1};
    adj[1]={2};
    adj[2]={3};
    adj[3]={1};

    vector<int> vis(V,0);

    if(dfs(0,adj,vis))
        cout<<"Cycle Detected";
    else
        cout<<"No Cycle";
}
