/*
File Name : 66_Prims.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Prim's Algorithm
*/
// Represents the graph using an adjacency list.
// Uses a priority queue to select the minimum weight edge.
// Maintains visited vertices.
// Builds the Minimum Spanning Tree incrementally.
// Displays the total weight of the Minimum Spanning Tree.
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int V = 5;
    vector<vector<pair<int,int>>> adj(V);

    auto addEdge = [&](int u,int v,int w){
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    };

    addEdge(0,1,2);
    addEdge(0,3,6);
    addEdge(1,2,3);
    addEdge(1,3,8);
    addEdge(1,4,5);
    addEdge(2,4,7);
    addEdge(3,4,9);

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<bool> vis(V,false);

    pq.push({0,0});
    int cost = 0;

    while(!pq.empty()){
        auto [w,u]=pq.top();
        pq.pop();

        if(vis[u]) continue;

        vis[u]=true;
        cost+=w;

        for(auto [v,wt]:adj[u])
            if(!vis[v])
                pq.push({wt,v});
    }

    cout<<cost;
}
