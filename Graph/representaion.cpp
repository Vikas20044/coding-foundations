#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> createAdj(vector<vector<int>> edges,int n){
      vector<vector<int>> adj(n+1);
     
      for(auto edge: edges){
            int v = edge[0];
            int u = edge[1];
           
            adj[v].push_back(u);
            adj[u].push_back(v);

      }
     
      return adj;
}
int main(){
      vector<vector<int>> edges = {{1,2},{1,3},{2,4},{2,5},{3,4},{4,5}};


      int n = 5;

      vector<vector<int>> adj = createAdj(edges,n);
  
      int i = 0;

     
      for(auto node: adj){
            cout << i++ << " : " ;
            for(int v: node){
                  cout << v << " ";
            }
            cout << endl;
      }
}