#include <iostream>
#include <vector>
using namespace std;
int singleElement(vector<int> nums){
      int l=0,r=nums.size()-1,mid;
      while(l<=r){
            mid=(l+r)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                  return mid;
            }

            if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1])) {
                  l = mid + 1; 
            } 
            else {
                  r = mid - 1; 
            }
            
      }
      return -1;
}
int main(){
      vector<int> n={1,1,2,3,3,4,4,8,8};
      cout << singleElement(n);
}