#include <iostream>
#include <vector>
using namespace std;
int pivotIndex(vector<int> nums){
      vector<int> presum;
      presum.push_back(nums[0]);
      for(int i=1; i<nums.size(); i++) presum.push_back(presum[i-1]+nums[i]);
      int total = presum.back();
     
      for(int i=0; i<presum.size(); i++){
            int lsum = (i==0) ? 0 : presum[i-1];
            int rsum = total - presum[i];
            
            if(lsum==rsum) return i;
      }
      return -1;
}
int main(){
      vector<int> n={1,7,3,6,5,6};
      cout << pivotIndex(n);
}