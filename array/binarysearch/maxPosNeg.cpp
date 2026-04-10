#include <iostream>

#include <vector>
using namespace std;
int maxCountPosNeg(vector<int> nums){
      int l=0,r=nums.size()-1,mid;
      int pos,neg;
      while(l<=r){           
            if(nums[l]>=0){
                 
                  break;
            }
            int mid=(l+r)/2;

            if(nums[mid]>=0) r=mid-1;

            else l=mid+1;
            
      }
      neg=l;
      r=nums.size()-1;
      while(l<=r){
           
            if(nums[l]>=1){
                 
                  break;
            }
            int mid=(l+r)/2;

            if(nums[mid]>=1) r=mid-1;

            else l=mid+1;

      }
      pos=nums.size()-l;
      return max(pos,neg);
}
int main(){
      vector<int> n={-3,-2,-1,0,0,1,2};
      cout <<maxCountPosNeg(n);

}