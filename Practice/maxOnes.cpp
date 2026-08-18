#include <iostream>
#include <vector>
using namespace std;
int maxOnes(const vector<int>& nums){
      if(nums.size()==0) return 0;
      int maxCount = 0;
      int currentCount = 0;
      for(int ele: nums){
            if(ele==1){
                  currentCount++;
            }
            else{
                 
                  currentCount = 0;
            }
            maxCount = max(maxCount,currentCount);
      }
      return maxCount;
}
int main(){
      vector<int> nums={1, 1, 0, 1, 1, 1};
      cout << "Maximum consecutive ones : " << maxOnes(nums);
}