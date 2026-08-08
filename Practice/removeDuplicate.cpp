#include <iostream>
#include <vector>
using namespace std;
int newSize(vector<int>& nums){
      if(nums.empty()) return 0;
      int idx=0;

      for(int i=1; i<nums.size(); i++){
            if(nums[idx]!=nums[i]){
                  nums[++idx] = nums[i];
            }
      }
      return idx+1;

}
int main(){
      vector<int> nums = {2, 2, 2, 2};

      int n = newSize(nums);

      for(int i=0; i<n; i++) cout << nums[i] << " ";
}