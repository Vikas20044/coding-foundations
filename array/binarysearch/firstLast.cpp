#include <iostream>
#include <vector>
using namespace std;
vector<int> firstLastOccurance(vector<int> nums,int target){
      vector<int> res;
     
      if(nums.size()==0){
          
            return res={-1,-1};
      }
      int first=-1,last=-1,left=0,right=nums.size()-1;

      while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                  first=mid;
                 
                  right=mid-1;
            }
            else if(nums[mid]>target) right=mid-1;

            else left=mid+1;
      }
      res.push_back(first);
      left=0,right=nums.size()-1;
      while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                  last=mid;
                  
                  left=mid+1;
            }
            else if(nums[mid]>target) right=mid-1;

            else left=mid+1;
      }

      res.push_back(last);

      return res;




}
int main(){
      vector<int> n={1, 3, 5, 5, 5, 5, 67, 123, 125};
      vector<int> res=firstLastOccurance(n,5);
      for(int x: res) cout << x << " ";
}