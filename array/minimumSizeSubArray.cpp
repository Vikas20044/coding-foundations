#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int minimumSubArraySum(const vector<int>& nums,int k){
      int minimumSize = INT_MAX;

      int l=0,r=0;
      int currentSum = 0;
      while(r<nums.size()){
            currentSum+=nums[r];
            cout << currentSum << " ";
            if(currentSum>=k){
                  minimumSize = min(minimumSize,r-l+1);
                  while(l<=r){
                        currentSum-=nums[l++];
                        cout << endl;
                        cout << currentSum << " ";
                        if(currentSum>=k){
                              minimumSize = min(minimumSize,r-l+1);
                        }
                  }
            }
            r++;
      }
      if(minimumSize>nums.size()){
            return 0;
      }
      return minimumSize;
}
int main(){
      vector<int> nums = {10,5,13,4,8,4,5,11,14,9,16,10,20,8};
      int k = 80;
      cout << "Minimum size of subarray sum : " << minimumSubArraySum(nums,k);
}