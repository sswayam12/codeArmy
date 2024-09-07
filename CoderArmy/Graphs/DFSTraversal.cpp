#includre<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int>adj[],int vis[],vector<int>&ls){
    vis[node] = 1;
    ls.push_back(node);

    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ls);
        }
    }
}
vector<int>dfsOfGraph(int V.vector<int>adj[]){
    int vis[V] = {0};
    int start = 0;
    vector<int>ls;
    dfs(start,adj,vis,ls);
    return ls;
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

    vector<int>ans = dfsOfGraph(5,adj);
    PrintAns(ans);

}