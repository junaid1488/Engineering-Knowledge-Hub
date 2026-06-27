/*
File Name : 67_Kruskals.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Kruskal's Algorithm
*/
// Stores all graph edges with their weights.
// Sorts edges in increasing order of weight.
// Uses Disjoint Set Union (Union-Find) for cycle detection.
// Selects valid edges for the Minimum Spanning Tree.
// Displays the total weight of the Minimum Spanning Tree.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge{
    int u,v,w;
};

int parent[100];

int find(int x){
    return parent[x]==x?x:parent[x]=find(parent[x]);
}

bool unite(int a,int b){
    a=find(a);
    b=find(b);
    if(a==b) return false;
    parent[a]=b;
    return true;
}

int main(){
    int V=4;

    vector<Edge> edges={
        {0,1,10},
        {0,2,6},
        {0,3,5},
        {1,3,15},
        {2,3,4}
    };

    sort(edges.begin(),edges.end(),[](Edge a,Edge b){
        return a.w<b.w;
    });

    for(int i=0;i<V;i++) parent[i]=i;

    int cost=0;

    for(auto e:edges)
        if(unite(e.u,e.v))
            cost+=e.w;

    cout<<cost;
}
