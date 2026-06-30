#include <iostream>
#include <vector>
using namespace std;

void dfs(int u, vector<vector<int>>& adj, vector<bool>& vis) {
    vis[u] = true;
    cout << u << " ";

    for (int v : adj[u])
        if (!vis[v])
            dfs(v, adj, vis);
}

int main() {
    int V = 5;
    vector<vector<int>> adj(V);

    adj[0] = {1, 2};
    adj[1] = {3};
    adj[2] = {4};

    vector<bool> vis(V, false);

    dfs(0, adj, vis);
}
