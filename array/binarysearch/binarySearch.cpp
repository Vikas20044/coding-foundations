#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int binarySearch(vector<int> nums,int target){
      int l=0,r=nums.size()-1;
      while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target) return mid;

            else if(nums[mid]<target) l=mid+1;

            else r=mid-1;
      }
      return -1;
}
int main(){
      vector<int> n={-1,0,3,5,9,12};
      int t=1;
      cout << binarySearch(n,9);
}