#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int> nums){
    
      unordered_set<vector<int>> res;

      for(int i=0; i<nums.size()-2; i++){
            unordered_set<int> seen;
            for(int j=i+1; j<nums.size(); j++){
                  int third = -(nums[i]+nums[j]);
                  if(seen.count(third)){
                        vector<int> tmp = {nums[i],nums[j],third};
                        sort(tmp.begin(),tmp.end());
                        res.insert(tmp);
                  }
                  seen.insert(nums[j]);
            }
      }
      
      return vector<vector<int>>(res.begin(),res.end());
}
int main(){
      vector<int> n = {-1,0,1,2,-1,-4};
      vector<vector<int>> res = threeSum(n);
      for(int i=0; i<res.size(); i++){
            for(int j=0; j<res[0].size(); j++){
                  cout << res[i][j] <<" ";
            }
            cout << endl;
      }
}