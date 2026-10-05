#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
vector<vector<int>> getPairs(vector<int>& nums) {
        // code here
      vector<vector<int>> result;
        
        
        
      sort(nums.begin(),nums.end());

      unordered_set<int> seen;
        
      int left = 0, right = nums.size()-1;
        
      while(left<right && nums[left]<0 && nums[right]>0){
            
            if(nums[left]+nums[right]==0){
                result.push_back({nums[left],nums[right]});
                seen.insert(nums[left]);
                seen.insert(nums[right]);
                left++;
                right--;
            }
            
            if(nums[left]+nums[right]>0 || seen.count(nums[right])){
                right--;
            } else if(nums[left]+nums[right]<0 || seen.count(nums[left])){
                left++;
            }
            
            
      }
      return result;
}
int main(){
      vector<int> nums = { -8, -10, -10, -10, 10, 6, 1, 10};
      vector<vector<int>> result = getPairs(nums);

      for(int i=0; i<result.size(); i++){
            for(int ele: result[i]){
                  cout << ele << " ";
            }
            cout << endl;
      }

}