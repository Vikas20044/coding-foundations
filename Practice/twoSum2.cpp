#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSumII(const vector<int>& nums, int target){
      int left = 0, right = nums.size()-1;
      while(left<right){
            int sum = nums[left] + nums[right];
            if(sum==target) return {left+1,right+1};

            if(sum < target) left++;

            else right--;
      }
      return {};
}

int main(){
      vector<int> nums={-10, -3, 0, 5, 9};
      int target = -1;

      vector<int> result = twoSumII(nums,target);

      cout << "Two indecies are : " << result[0] << " " << result[1];
}