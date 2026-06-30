#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int INF = 1e9;

    vector<vector<int>> dist = {
        {0,5,INF,10},
        {INF,0,3,INF},
        {INF,INF,0,1},
        {INF,INF,INF,0}
    };

    int V = dist.size();

    for (int k = 0; k < V; k++)
        for (int i = 0; i < V; i++)
            for (int j = 0; j < V; j++)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

    for (auto row : dist) {
        for (int x : row)
            cout << x << " ";
        cout << endl;
    }
}
