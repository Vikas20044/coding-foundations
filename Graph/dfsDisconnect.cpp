#include <iostream>
#include <vector>
using namespace std;
void createAdj(vector<vector<int>> edges,int n,vector<vector<int>>& adj){
    
      
      for(vector<int> edge: edges){

            int v = edge[0];
            int u = edge[1];
          
            adj[v].push_back(u);
            adj[u].push_back(v);
            cout << adj[v][0];
      }
     

}

void dfsRec(int source ,vector<vector<int>> adj, int n, vector<int>& result, vector<bool>& visited){
      visited[source] = true;
      result.push_back(source);

      for(int node: adj[source]){
            if(!visited[node]){
                  dfsRec(node,adj,n,result,visited);
            }
      }
}
vector<int> dfs(vector<vector<int>> edges,int n){
      vector<vector<int>> adj(n);
      createAdj(edges,n,adj);
      vector<int> result;
      vector<bool> visited(n,false);
      for(int i=0; i<n; i++){
            if(!visited[i]){
                  dfsRec(i,adj,n,result,visited);
            }
            
      }

      return result;

}
int main(){
      vector<vector<int>> edges = {{0,1},{1,4},{1,2},{2,3},{6,5}};
      int n = 7;

      vector<int> result = dfs(edges,n);

      for(int ele: result){
            cout << ele << endl;
      }
}