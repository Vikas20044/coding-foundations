#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int timeTicket(vector<int> nums,int k){
      
      queue<pair<int,int>> q;
      for(int i=0; i<nums.size(); i++) {
            q.push({i,nums[i]});
      }
      int time=0;
      while(!q.empty()){
           
            q.front().second--;
            time++;
           
            if(q.front().first==k && q.front().second==0){
                  break;
            }
            if(q.front().second>0){
                  q.push({q.front().first,q.front().second});
                
                  
            }
            q.pop();
            
            
            
            
      }
      return time;


}
int main(){
      vector<int> n={2,3,2};

      cout << endl << timeTicket(n,2);
}