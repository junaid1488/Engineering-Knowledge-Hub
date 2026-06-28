/*
File Name : 70_Disjoint_Set.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Disjoint Set Union (DSU)
*/

#include <iostream>
#include <vector>
using namespace std;

class DSU {
    vector<int> parent, rankv;

public:
    DSU(int n) {
        parent.resize(n);
        rankv.assign(n, 0);
        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int x) {
        return parent[x] == x ? x : parent[x] = find(parent[x]);
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);

        if (a == b) return;

        if (rankv[a] < rankv[b])
            swap(a, b);

        parent[b] = a;

        if (rankv[a] == rankv[b])
            rankv[a]++;
    }
};

int main() {
    DSU dsu(5);

    dsu.unite(0, 1);
    dsu.unite(1, 2);

    cout << (dsu.find(0) == dsu.find(2));

    return 0;
}
