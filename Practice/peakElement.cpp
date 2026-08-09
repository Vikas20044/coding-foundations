#include <iostream>
#include <vector>
using namespace std;
int peakElement(const vector<int>& nums){
      if(nums.size()==0 || nums.size()==1) return 0;

      for(int i=0; i<nums.size()-2; i++){
            if(nums[i]>nums[i+1]) return nums[i];
      }

      return 0;

}
int main(){
      vector<int> nums = {1, 2, 3, 4};

      cout << "Peak element : " << peakElement(nums);
}