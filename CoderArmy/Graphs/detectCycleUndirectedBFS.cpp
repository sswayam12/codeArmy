#include<bits/stdc++.h>
using namespace std;

bool detect(int src,vector<int>adj[],int vis[]){
    vis[src] = 1;
    queue<pair<int,int>>q;
    q.push(make_pair(src,-1));

    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(make_pair(it,node));
            }
            else if(parent != it){
                return true;
            }
        }
    }
    return false;
}

bool isCycle(int V,vector<int>adj[]){
    int vis[V] = {0};
    for(int i = 0;i<V;i++){
        if(!vis[i] && detect(i,adj,vis))
        return true;
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