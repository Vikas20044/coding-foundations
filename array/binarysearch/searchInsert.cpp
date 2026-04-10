#include <iostream>

#include <vector>
using namespace std;
int searchInsert(vector<int> nums,int target){
      int l=0,r=nums.size()-1;
      while(l<=r){
            if(nums[l]>=target) return l;
            int mid=(l+r)/2;

            if(nums[mid]<=target) l=mid+1;

            else r=mid-1;
      
            
      }
      return l;

}
int main(){
      vector<int> n={1,3,5,6};
      int target=2;
      cout << searchInsert(n,target);
}