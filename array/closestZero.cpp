#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int closestZero(vector<int> nums){
      int res=nums[0];
      for(int i=1; i<nums.size(); i++){
            
            if(abs(res)>abs(nums[i])){
                  res=nums[i];
            }
      }
      if(res<0){
            for(int i: nums){
                  if(i==abs(res)) return abs(res);
            }
      }

      
      
      
      return res;

}
int main(){
      vector<int> n={-4,-2,1,4,8};
      int res=closestZero(n);

      cout << res;

}