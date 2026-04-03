#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSumTwo(vector<int> nums,int target){
      int l=0,r=nums.size()-1;
      vector<int> res;
      while(l<r){

            if((nums[l]+nums[r])==target){
            
                  res.push_back(l);
                  res.push_back(r);
            }
            if((nums[l]+nums[r])< target) l++;
            else r--;
      }
      return res;

}
int main(){
      vector<int> n={2,7,11,15};
      vector<int> res=twoSumTwo(n,9);
      for(int i: res) cout << i << " ";

}