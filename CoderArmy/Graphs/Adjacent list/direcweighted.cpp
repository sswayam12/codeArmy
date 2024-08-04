#include<bits/stdc++.h>
using namespace std;

int main(){

    int vertex,edges;
    cin>>vertex>>edges;

    vector<pair<int,int>>adjList[vertex + 1];
    
    
    int u,v,weight;
    for(int i = 0;i<edges;i++){
        
        cin>>u>>v>>weight;

        adjList[u].push_back(make_pair(v,weight));


    }
    for(int i = 0;i<vertex;i++){
        cout<<i<<"->";
        for(int j = 0; j < adjList[i].size();j++){
            cout<<adjList[i][j].first<<" "<<adjList[i][j].second<<" ";
        }
        cout<<endl;
    }
}