#include <iostream>
#include <vector>
using namespace std;

struct Edge {
    int u, v, w;
};

int main() {
    int V = 5;
    vector<Edge> edges = {
        {0,1,6},{0,2,7},{1,2,8},{1,3,5},{1,4,-4},
        {2,3,-3},{2,4,9},{3,1,-2},{4,3,7}
    };

    vector<int> dist(V, 1e9);
    dist[0] = 0;

    for (int i = 1; i < V; i++)
        for (auto e : edges)
            if (dist[e.u] != 1e9 && dist[e.u] + e.w < dist[e.v])
                dist[e.v] = dist[e.u] + e.w;

    for (int d : dist)
        cout << d << " ";
}
