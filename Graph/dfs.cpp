#include <iostream>
#include <vector>
using namespace std;

void dfsRec(vector<vector<int>>& adj, int source , vector<int>& result, vector<bool>& visited){
      visited[source] = true;
  

      result.push_back(source);

      for(int node: adj[source]){
            if(!visited[node]){
                  dfsRec(adj,node,result,visited);
            }
      }
}

vector<int> dfs(vector<vector<int>> edges,int n){
      vector<vector<int>> adj(n+1);
     
      for(auto edge: edges){
            int v = edge[0];
            int u = edge[1];
           
            adj[v].push_back(u);
            adj[u].push_back(v);

      }

      vector<bool> visited(n,false);

      vector<int> result;

      int source = 0;
      dfsRec(adj,source , result,visited);

      return result;
     
      
}


int main(){
      vector<vector<int>> edges = {{0,1},{0,2},{1,3},{1,4},{3,4}};    

      vector<int> result = dfs(edges,5);
      
      for(int node: result){
            cout << node << " ";
      }

}