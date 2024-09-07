#include<bits/stdc++.h>
using namespace std;

bool dfs(int node,int parent,int vis[],vector<int>adj[]){
    vis[node] = 1;

    for(auto adjNode:adj[node]){
        if(!vis[adjNode] && dfs(adjNode,node,vis,adj))
        return 1;
    else if(adjNode != parent)
    return 0;
    }
    return false;
}

bool isCycle(int V,vector<int>adj[]){
    int vis[V] = {0};
    for(int i = 0;i<V;i++){
        if(!vis[i] && dfs(i,-1,vis,adj)){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int>adj[6] = {{},{2},{1,3},{2},{1,3},{2}};
    bool ans = isCycle(4,adj);
    if(ans){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
}