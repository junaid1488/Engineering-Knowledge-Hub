/*
File Name : 61_BFS.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Breadth First Search (BFS)
*/
// Creates an adjacency list to represent the graph.
// Uses a queue to perform Breadth First Search.
// Marks visited vertices to avoid revisiting.
// Traverses all reachable vertices level by level.
// Displays the BFS traversal sequence.
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int V = 5;
    vector<vector<int>> adj(V);

    adj[0] = {1, 2};
    adj[1] = {3};
    adj[2] = {4};

    vector<bool> vis(V, false);
    queue<int> q;

    q.push(0);
    vis[0] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        cout << u << " ";

        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
}
