#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int longestIncreasing(const vector<int>& nums){
      if(nums.size()==1){
            return 1;
      }
      int longest = 1;
      int currentLong = 0;
      int minimum = 0;

      for(int i=0; i<nums.size(); i++){
            if(nums[i]>nums[minimum]){
                  
                  currentLong++;

            } else if(nums[i]<=nums[minimum]){
                  cout << currentLong << " ";
                  longest = max(longest,currentLong);
                  currentLong = 1;
                  minimum = i;
            }
      }
      cout << currentLong;
      return longest;
}
int main(){
      vector<int> nums = {10,9,2,5,3,7,101,18};
      cout << "Minimum size of subarray sum : " << longestIncreasing(nums);
}