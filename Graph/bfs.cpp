#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfs(vector<vector<int>> adj){
      int n = adj.size();

      queue<int> q;
      vector<int> visited(n,false);
      vector<int> result;

      q.push(0);
      visited[0] = true;
      while(!q.empty()){
            int cur = q.front();
            q.pop();
            result.push_back(cur);

            for(int neighbour: adj[cur]){
                  if(!visited[neighbour]){
                        visited[neighbour] = true;
                        q.push(neighbour);
                  }
            }
      }

      return result;

}


int main(){
      vector<vector<int>> adj = {{1,2,3},{0,4,2},{0,1,5},{0,6,7},{1},{2},{3},{3}};    
      vector<int> result = bfs(adj);
      
      for(int node: result){
            cout << node << " ";
      }

}