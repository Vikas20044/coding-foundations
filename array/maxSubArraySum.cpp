#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxSubArraySum(vector<int> nums){
      int maxsum=INT_MIN;
      int csum=0;
      for(int i=0; i<nums.size(); i++){
            csum+=nums[i];
            maxsum=max(maxsum,csum);
            if(csum<0) csum=0;
      }
      return maxsum;
}
int main(){
      vector<int> n={-2,1,-3,4,-1,2,1,-5,4};
      cout << maxSubArraySum(n);
}