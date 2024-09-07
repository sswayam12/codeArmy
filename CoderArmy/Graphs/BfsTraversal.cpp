#include<bits/stdc++.h>
using namespace std;

vector<int>BfsOfGraph(int V,vector<int>adj[]){
    int vis[V] = {0};
    vis[0] = 1;

    queue<int>q;
    q.push(0);
    vector<int>bfs;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for(auto adjacentNode:adj[node]){
            if(!vis[adjacentNode]){
                vis[adjacentNode] = 1;
                q.push(adjacentNode);
            }
        }
    }
    return bfs;
}

void AddEdges(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void PrintAns(vector<int>&ans){
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    vector<int>adj[6];
    AddEdges(adj,0,1);
    AddEdges(adj,1,2);    
    AddEdges(adj,1,3);    
    AddEdges(adj,0,4);

    vector<int>ans = BfsOfGraph(5,adj);
    PrintAns(ans);

}