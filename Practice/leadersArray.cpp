#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> leadersArray(const vector<int>& nums){
      if(nums.size()==1) return nums;

      if(nums.size()==0) return {};

      vector<int> leaders;
      int maxEle = nums[nums.size()-1];
      leaders.push_back(maxEle);
      for(int i=nums.size()-2; i>=0; i--){
            if(nums[i]>=maxEle){
                  leaders.push_back(nums[i]);
                  maxEle = nums[i];
            }
      }
      reverse(leaders.begin(),leaders.end());
      return leaders;
}
int main(){
      vector<int> nums={};

      vector<int> result = leadersArray(nums);

      for(int ele: result) cout << ele << " ";
}