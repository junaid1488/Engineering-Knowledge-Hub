/*
File Name : 68_Topological_Sort.cpp
Author    : Mohd Juned
Language  : C++
Topic     : Topological Sort
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int V = 6;

    vector<vector<int>> adj(V);
    vector<int> indegree(V,0);

    adj[5]={2,0};
    adj[4]={0,1};
    adj[2]={3};
    adj[3]={1};

    for(int i=0;i<V;i++)
        for(int v:adj[i])
            indegree[v]++;

    queue<int> q;

    for(int i=0;i<V;i++)
        if(indegree[i]==0)
            q.push(i);

    while(!q.empty()){
        int u=q.front();
        q.pop();

        cout<<u<<" ";

        for(int v:adj[u]){
            indegree[v]--;
            if(indegree[v]==0)
                q.push(v);
        }
    }
}
